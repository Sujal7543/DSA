#include<bits/stdc++.h>
using namespace std;

void dijkstra(int n, vector<pair<int,int>> adj[], int src) {
    vector<int> dist(n, INT_MAX);
    vector<int> parent(n);

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    dist[src] = 0;
    for(int i = 0; i < n; i++) parent[i] = i;

    pq.push({0, src});

    while(!pq.empty()) {
        int d = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto it : adj[node]) {
            int adjNode = it.first;
            int wt = it.second;

            if(d + wt < dist[adjNode]) {
                dist[adjNode] = d + wt;
                pq.push({dist[adjNode], adjNode});
                parent[adjNode] = node;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << "Friend at node " << i << ":\n";
        cout << "Distance = " << dist[i] << "\nPath = ";

        int node = i;
        vector<int> path;
        while(parent[node] != node) {
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(src);

        reverse(path.begin(), path.end());

        for(auto x : path) cout << x << " ";
        cout << "\n\n";
    }
}

int main() {
    int n = 5; 
    vector<pair<int,int>> adj[n];

    // Example graph
    adj[0].push_back({1, 2});
    adj[1].push_back({0, 2});

    adj[0].push_back({2, 4});
    adj[2].push_back({0, 4});

    adj[1].push_back({2, 1});
    adj[2].push_back({1, 1});

    adj[1].push_back({3, 7});
    adj[3].push_back({1, 7});

    adj[2].push_back({4, 3});
    adj[4].push_back({2, 3});

    int akshay_house = 0;

    dijkstra(n, adj, akshay_house);

    return 0;
}