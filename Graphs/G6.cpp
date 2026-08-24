class Solution{
public:
    bool isCycle(int V, vector<int> adj[]) {
      vector<int> vis(V,0);
      for(int i=0;i<V;i++){
        if(!vis[i]){
            queue<pair<int,int>> q;
            q.push({i,-1});
            vis[i]=1;
            while(!q.empty()){
                int node=q.front().first;
                int parent=q.front().second;
                q.pop();
                for(auto neighbour:adj[node]){
                    if(!vis[neighbour]){
                        vis[neighbour]=1;
                        q.push({neighbour,node});
                    }
                    else if(neighbour!=parent){
                        return true;
                    }
                }
            }
        }
      }
      return false;  
    }
};
