class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
      vector<pair<int,int>> adj[n];
      for(auto it:flights){
        int u=it[0];
        int v=it[1];
        int price=it[2];
        adj[u].push_back({v,price});
      }
      vector<int> dist(n,1e9);
      dist[src]=0;
      queue<pair<int,pair<int,int>>> q;
      q.push({0,{src,0}});
      while(!q.empty()){
        auto it=q.front();
        q.pop();
        int stops=it.first;
        int node=it.second.first;
        int cost=it.second.second;
        if(stops>k){
            continue;
        }
        for(auto neighbour:adj[node]){
            int adjNode=neighbour.first;
            int price=neighbour.second;
            if(cost+price<dist[adjNode]){
                dist[adjNode]=cost+price;
                q.push({stops+1,{adjNode,dist[adjNode]}});
            }
        }
      
      }
      if(dist[dst]==1e9){
        return -1;
      }
      return dist[dst];

    }
    
};
