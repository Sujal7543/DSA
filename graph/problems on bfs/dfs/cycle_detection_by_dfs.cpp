/*
#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,int parent,int vis[],vector<int>adj[]){
    vis[node]=1;
    for(auto it: adj[node]){
        if(!vis[it]){
            if(dfs(it,node,vis,adj)==true){
                return true;
            } 
        }
        else if(it!=parent){
            return true;
        }
    }
return false;

}
int main(){
    int n;
    cout<<"enter nodes =";
    cin>>n;

    int e;
    cout<<"enter edges =";
    cin>>e;

    vector<int>adj[n];

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodse =";
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int vis[n]={0};
    int start=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
    if(dfs(i,-1,vis,adj)==true){
        cout<<true;
    }
}
}
    return 0;
}
    */

#include<bits/stdc++.h>
using namespace std;
bool dfs(int node,int parent,vector<int>adj[],int vis[]){
    vis[node]=1;

    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(it,node,adj,vis)==true){
                return true;
            }
        }
        else if(it!=parent){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter no of nodes =";
    cin>>n;

    int e;
    cout<<"enter no of edges =";
    cin>>e;

    vector<int>adj[n];
    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodes =";
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int vis[n]={0};
    int a=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(dfs(i,-1,adj,vis)==true){
                a=1;
                break;
            }
        }
    }
    if(a){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}