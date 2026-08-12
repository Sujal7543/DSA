/*
#include<bits/stdc++.h>
using namespace std;
void calldfs(int node,vector<int> adj[],int vis[],vector<int>& dfs){

    vis[node]=1;
    dfs.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]){
            calldfs(it,adj,vis,dfs);
        }
    }
}
int main(){
    int n;
    cout<<"enter nodes =";
    cin>>n;

    int e;
    cout<<"enter edges =";
    cin>>e;

    vector<int>adj[n+1];

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodes ";
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int vis[n+1]={0};
    int start=1;
    vector<int>dfs;
    calldfs(start,adj,vis,dfs);

    for(int i=0;i<dfs.size();i++){
        cout<<dfs[i]<<" ";
    }

    return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
void calldfs(int node,vector<int>adj[],vector<int>&dfs,int vis[]){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            calldfs(it,adj,dfs,vis);
        }
    }
}
int main(){
    int n;
    cout<<"enter nodes =";
    cin>>n;

    int e;
    cout<<"Enter edges =";
    cin>>e;

    vector<int>adj[n+1];

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter edges between nodes =";
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>dfs;
    int vis[n+1]={0};
    int start=1;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
    
    calldfs(i,adj,dfs,vis);
        }
    }

    return 0;
}
