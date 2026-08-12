#include<bits/stdc++.h>
using namespace std;

vector<int> dijistra(int n,vector<int>adj[],int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;

    vector<int>dist(n,INT_MAX);
    dist[0]=0;
    pq.push({0,s});

    while(!pq.empty()){
        int dis=pq.top().first;
        int node=pq.top().second;
    pq.pop();

    for(auto it:adj[node]){
        int adjnode=it[0];
        int weight=it[1];

        if(dis+weight<dist[adjnode]){
            dist[adjnode]=dist+weight;
            pq.push({dist[adjnode],adjnode});
        }
    }
    }
    return dist;
}
int main(){

    int n;
    cout<<"enter no of nodes =";
    cin>>n;

    int e;
    cout<<"enter no of edges =";
    cin>>e;

    vector<vector<int,int>>adj[n];
    for(int i=0;i<e;i++){
        int u,v,w;
        cout<<"enter edges between nodes =";
        cin>>u>>v;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int source;
    cout<<"enter source ";
    cin>>s;

    vector<int>ans=dijistra(n,adj,s);


    return 0;
}