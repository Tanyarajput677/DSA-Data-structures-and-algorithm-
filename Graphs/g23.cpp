class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> adj[n];
        for(auto it: roads){
            int u=it[0];
            int v=it[1];
            int time=it[2];
            adj[u].push_back({v,time});
            adj[v].push_back({u,time});
        }
        vector<long long> dist(n,1e18);
        vector<int> ways(n,0);
        dist[0]=0;
        ways[0]=1;
        priority_queue< pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>> > pq;
        pq.push({0, 0});
        int mod=1e9+7;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            long long dis=it.first;
            int node=it.second;
            for(auto neighbour:adj[node]){
                int adjnode=neighbour.first;
                int wt=neighbour.second;
                long long newdist=dis+wt;
                if(newdist<dist[adjnode]){
                    dist[adjnode]=newdist;
                    ways[adjnode]=ways[node];
                    pq.push({newdist,adjnode});
                }
                else if(newdist==dist[adjnode]){
                   ways[adjnode] = (ways[adjnode] + ways[node]) % mod;
                }
            }
        }
        return ways[n-1];
        
    }
};
