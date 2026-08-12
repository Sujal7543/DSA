#include<bits/stdc++.h>
using namespace std;
bool issafe(vector<vector<char>>&board,int row,int col,int test){
    int startingrow=-1;
    int endingrow=-1;
    int startingcol=-1;
    int endingcol=-1;

    if(row==0 || row==1|| row==2){
        startingrow=0;
        endingrow=2;
    }
    else if(row==3||row==4||row==5){
        startingrow=3;
        endingrow=5;
    }
    else{
        startingrow=6;
        endingrow=8;
    }

    if(col==0 || col==1 || col==2){
        startingcol=0;
        endingcol=2;
    }
    else if(col==3||col==4||col==5){
        startingcol=3;
        endingcol=5;
    }
    else{
        startingcol=6;
        endingcol=8;
    }
    for(int i=startingrow;i<=endingrow;i++){
        for(int j=startingcol;j<endingcol;j++){
            if(board[i][j]==test){
                return false;
            }
        }
    }
    for(int i=0;i<9;i++){
        if(board[row][i]==test){
            return false;
        }
        if(board[i][col]==test){
            return false;
        }
    }
    return true;

}
bool sudoku(int row,int col,int n,vector<vector<char>>&board){
if(col==9 && row<n-1){
    row++;
    col=0;
}
if(row==n-1 && col==n){
    return true;
}
if(board[row][col]!='.'){
    return sudoku(row,col+1,n,board);
}
for(char i='1';i<='9';i++){
    if(issafe(board,row,col,i)){
        board[row][col]=i;
        if(sudoku(row,col+1,n,board)){
            return true;
        }
        board[row][col]='.';
    }
}
return false;
}

int main(){
    int n=9;
    vector<vector<char>>board(n,vector<char>(n));
    for(int i=0;i<n;i++){
        cout<<"put element in first row "<<endl;
        for(int j=0;j<n;j++){
            cin>>board[i][j];
        }
    }
    sudoku(0,0,n,board);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<",";
        }
        cout<<endl;
    }


    return 0;
}