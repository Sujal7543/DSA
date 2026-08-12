#include<bits/stdc++.h>
using namespace std;
void mqueens(int col,int n,vector<string>&board,vector<int>&leftcheck,vector<int>&leftup,vector<int>&leftdown,int &ans){
    if(col==n){
        ans++;
        return;
    }
    for(int row=0;row<n;row++){
        if(leftcheck[row]==0 && leftup[n-1+row-col]==0 && leftdown[row+col]==0){
            board[row][col]='Q';
            leftcheck[row]=1;
            leftup[n-1+row-col]=1;
            leftdown[row+col]=1;
            mqueens(col+1,n,board,leftcheck,leftup,leftdown,ans);
            board[row][col]='.';
            leftcheck[row]=0;
            leftup[n-1+row-col]=0;
            leftdown[row+col]=0;
        }
    }
}
int main(){
    int n;
    cout<<"Enter no of queens";
    cin>>n;
    int ans=0;
    vector<string>board(n,string(n,'.'));
    vector<int>leftcheck(n,0);
    vector<int>leftup(2*n-1,0);
    vector<int>leftdown(2*n-1,0);
    mqueens(0,n,board,leftcheck,leftup,leftdown,ans);
    cout<<"maximum possible way to place queens are ="<<ans;

    return 0;
}