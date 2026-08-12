/*
#include<bits/stdc++.h>
using namespace std;
bool detect(int source,vector<int>adj[],int vis[]){
    queue<pair<int,int>>q;
    q.push({source,-1});
    vis[source]=1;

    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push({it,node});
            }
            else if(it!=parent){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter nodes =";
    cin>>n;

    int e;
    cout<<"enter edges =";
    cin>>e;

    vector<int>adj[n];
    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodes =";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int a=0;

    int vis[n]={0};
    for(int i=0;i<n;i++){
        if(!vis[i]){
        if(detect(i,adj,vis)==true){
            cout<<"true";
            a=1;
            break;
        }
    }
    }
    if(a==0){
        cout<<"false";
    }




    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
bool detect(int source,vector<int>adj[],int vis[]){
    queue<pair<int,int>>q;
    q.push({source,-1});
    vis[source]=1;

    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();

        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push({it,node});
            }
            else if(it!=parent){
                return true;
            }
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
        cout<<"enter edges between nodes =";
        cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    }

 int a=0;
    int vis[n]={0};
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(detect(i,adj,vis)==true){
                cout<<"true";
                a=1;
                break;
            }
        }
    }
if(a==0){
    cout<<"false";
}
    return 0;
}