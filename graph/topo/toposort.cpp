/*
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],int vis[],stack<int> &st){
    vis[node]=1;
    for(auto it: adj[node]){
        if(!vis[node]){
            dfs(it,adj,vis,st);
        }
        st.push(it);
    }
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

    int vis[n]={0};
    stack<int>st;
    vector<int>ans;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i,adj,vis,st);
        }
    }

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}*/

/*
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int>adj[],int vis[],stack<int> &st){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,st);
        }
    }
    st.push(node);
}
int main(){
    int n;
    cout<<"enter nodes =";
    cin>>n;

    int e;
    cout<<"Enter edges =";
    cin>>e;

    vector<int>adj[n];

    for(int i=0;i<e;i++){
        int u,v;
        cout<<"enter edges between nodes =";
        cin>>u>>v;
        adj[u].push_back(v);
    }

    int vis[n]={0};
    stack<int>st;
    vector<int>ans;

    for(int i=0;i<n;i++){
        if(!vis[i]){
        dfs(i,adj,vis,st);
        }
    }

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
void dfscall(int node,vector<int>adj[],int vis[],stack<int>& st){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfscall(it,adj,vis,st);
            }
        }
         st.push(node);
}
int main(){
    int n;
    cout<<"enter node =";
    cin>>n;

    int e;
    cout<<"Enter edges =";
    cin>>e;

    vector<int>adj[n];
    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter edges netween nodes =";
        cin>>u>>v;
        adj[u].push_back(v);
    }

    int start=0;
    vector<int>ans;
    stack<int>st;
    int vis[n]={0};
    dfscall(start,adj,vis,st);

    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}