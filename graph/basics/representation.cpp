/*
matrix
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter nodes =";
cin>>n;

int e;
cout<<"enter edges =";
cin>>e;

int adj[n+1][n+1]={0};

for(int i=0;i<e;i++){
    int u,v;
    cout<<"enter edges between nodes =";
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1;
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}*/

//list

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter no of nodes =";
    cin>>n;

    int e;
    cout<<"enter no of edges =";
    cin>>e;

    vector<int>adj[n+1];

    for(int i=0;i<e;i++){
        int u;
        int v;
        cout<<"enter nodes which has between edges =";
        cin>>u>>v;
        if(u<1 || u<n || v<1 || v>n){
            cout<<"invalid edges ";
            continue;
        }

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}

