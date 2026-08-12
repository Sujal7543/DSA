/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of nodes =";
    cin>>n;

    int e;
    cout<<"enter edges no =";
    cin>>e;

    vector<int>adj[n];

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodes =";
        cin>>u>>v;
        adj[u].push_back(v);
    }

    queue<int>q;
    int indegree[n]={0};
    for(int i=0;i<n;i++){
        for(auto it:adj[i]){
        indegree[it]++;
        }
    }

    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>ans;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);

        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }


    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
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
    }

    queue<int>q;
    vector<int>ans;
    int indegree[n]={0};
    for(int i=0;i<n;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }

    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);

        for(auto it:adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }



    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter nodes =";
    cin>>n;

    int e;
    cout<<"Enter edges =";
    cin>>e;

    vector<int>adj[n];

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodes";
        cin>>u>>v;
        adj[u].push_back(v);
    }

    vector<int>ans;
    queue<int>q;
    int vis[n]={0};
    int indegree[n]={0};

    for(int i=0;i<n;i++){
        for(auto it:adj[i]){
            indegree[it]++;
        }
    }

    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);

        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}