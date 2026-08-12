/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of node =";
    cin>>n;

    int e;
    cout<<"enter no of edges =";
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
    queue<int>q;
    vector<int>bfs;
    q.push(1);
    vis[1]=1;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }

    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }

    return 0;
}*/
#

#include<bits/stdc++.h>
using namespace std;
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
        cout<<"enter edges between nodes =";
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>bfs;
    queue<int>q;
    int vis[n+1]={0};


    for(int i=1;i<=n;i++){
        if(!vis[i]){
             q.push(i);
    vis[i]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
}
    }

    for(int i=0;i<bfs.size();i++){
        cout<<bfs[i]<<" ";
    }


    return 0;
}