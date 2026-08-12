#include<bits/stdc++.h>
using namespace std;
void rat(int row,int col,int n,string &temp,vector<vector<int>>&checker,vector<string>&ans,vector<vector<int>>&maze){
    if(row==n-1 && col==n-1){
        ans.push_back(temp);
        return;
    }
    checker[row][col]=1;
    if(row<n-1 && checker[row+1][col]==0 && maze[row+1][col]==1){
        temp.push_back('D');
        rat(row+1,col,n,temp,checker,ans,maze);
        temp.pop_back();
    }
     if(col>0 &&checker[row][col-1]==0 && maze[row][col-1]==1){
        temp.push_back('L');
        rat(row,col-1,n,temp,checker,ans,maze);
        temp.pop_back();
    }
     if(col<n-1 && checker[row][col+1]==0 && maze[row][col+1]==1){
        temp.push_back('R');
        rat(row,col+1,n,temp,checker,ans,maze);
        temp.pop_back();
    }
     if(row>0 && checker[row-1][col]==0 && maze[row-1][col]==1){
        temp.push_back('U');
        rat(row-1,col,n,temp,checker,ans,maze);
        temp.pop_back();
    }
    checker[row][col]=0;

}
int main(){
    int n;
    cout<<"enter row and coloum size on matrix";
    cin>>n;
    vector<vector<int>>maze(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    vector<string>ans;
    string temp;
     vector<vector<int>>checker(n,vector<int>(n,0));
     if(maze[0][0]!=0){
    rat(0,0,n,temp,checker,ans,maze);
     }
     if(ans.empty()){
        cout<<"not path";
     }
     else{
        for(auto s:ans){
            cout<<s<<endl;
        }
     }
    return 0;
}