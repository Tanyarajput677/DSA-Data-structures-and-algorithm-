class Solution{
public:
    vector<int> dijkstra(int V, vector<vector<int>> edges, int S) {
        vector<pair<int,int>> adj[V];
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        vector<int> dis(V,1e9);
        dis[S]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,S});
        while(!pq.empty()){
            int d=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                int v=it.first;
                int wt=it.second;
                if(d+wt<dis[v]){
                    dis[v]=d+wt;
                    pq.push({dis[v],v});
                }

            }
        }
        return dis;

    }
};
