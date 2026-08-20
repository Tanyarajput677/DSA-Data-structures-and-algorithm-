class Solution {
  public:
    void dfs(int node,vector<vector<int>>& adj,vector<int>& visited){
        visited[node]=1;
        for(auto neighbour:adj[node]){
            if(!visited[neighbour]){
                dfs(neighbour,adj,visited);
            }
        }
    }
    int findNumberOfComponent(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> visited(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                count++;
                dfs(i,adj,visited);
            }
        }
        return count;

    
    }
};
