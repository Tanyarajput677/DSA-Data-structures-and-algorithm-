class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M){
        vector<vector<int>> adj(N);
        for(auto it: edges){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int> dist(N,1e9);
        dist[0]=0;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int neighbour:adj[node]){
                if(dist[node]+1<dist[neighbour]){
                    dist[neighbour]=dist[node]+1;
                    q.push(neighbour);
                }
            }
        }
        for(int i=0;i<N;i++){
            if(dist[i]==1e9){
                dist[i]=-1;
            }
        }
        return dist;
   
    }
};
