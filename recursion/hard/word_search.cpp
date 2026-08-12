#include<bits/stdc++.h>
using namespace std;
bool check(int row,int col,int n,int m,vector<vector<char>>&board,vector<vector<int>>&hash,string word,int ind){
    if(ind==word.length()-1){
        return true;
    }
    hash[row][col]=1;
    if(row<n-1 && hash[row+1][col]==0 && board[row+1][col]==word[ind+1]){
        if(check(row+1,col,n,m,board,hash,word,ind+1)){
            return true;
        }
    }
    if(col<m-1 && hash[row][col+1]==0 && board[row][col+1]==word[ind+1]){
        if(check(row,col+1,n,m,board,hash,word,ind+1)){
            return true;
        }
    }
    if(row>0 && hash[row-1][col]==0 && board[row-1][col]==word[ind+1]){
        if(check(row-1,col,n,m,board,hash,word,ind+1)){
            return true;
        }
    }
    if(col>0 && hash[row][col-1]==0 && board[row][col-1]==word[ind+1]){
        if(check(row,col-1,n,m,board,hash,word,ind+1)){
            return true;
        }
    }
    hash[row][col]=0;
    return false;
}
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;

    int m;
    cout<<"enter no of coloums";
    cin>>m;

    vector<vector<char>>board(n,vector<char>(m));
    for(int i=0;i<n;i++){
        cout<<"enter in first row";
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    string words ;
    cout<<"enter string ";
    cin>>words;

    vector<vector<int>>hash(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]==words[0]){
                if(check(i,j,n,m,board,hash,words,0)){
                    cout<<"true";
                    return 0;
                }
            }
        }
    }
    cout<<"false";


    return 0;
}