// used hash for checking queen is safe otherwise have to traverse in left upperleft and lowerleft 3n
#include<bits/stdc++.h>
using namespace std;
void queen(int col,int n,vector<string>&board,vector<vector<string>>&ans,vector<int>&leftcheck,vector<int>&leftup,vector<int>&leftdown){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;++row){
        if(leftcheck[row]==0 && leftup[n-1+row-col]==0 && leftdown[row+col]==0){
            leftcheck[row]=1;
            leftup[n-1+row-col]=1;
            leftdown[row+col]=1;
            board[row][col]='Q';
            queen(col+1,n,board,ans,leftcheck,leftup,leftdown);
            board[row][col]='.';
             leftcheck[row]=0;
            leftup[n-1+row-col]=0;
            leftdown[row+col]=0;
        }
    }
}
int main(){
    int n;
    cout<<"enter queens size and board size";
    cin>>n;
    vector<string>board(n,string(n,'.'));
    vector<vector<string>>ans;
    vector<int>leftcheck(n,0);
    vector<int>leftup(2*n-1,0);
    vector<int>leftdown(2*n-1,0);
    queen(0,n,board,ans,leftcheck,leftup,leftdown);

    for (auto it : ans) {
    for (auto row : it) {
        cout << row << endl;
    }
    cout << endl;
}

    return 0;
}