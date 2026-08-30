class Solution{
public:
    vector<int> topoSort(int V, vector<int> adj[]){
        vector<int> indegree(V,0);
        for(int i=0;i<v;i++){
            for(int neighbour:adj[i]){
                indegree[neighbour]++;
            }
        }

        queue<int> q;
        for(int i=0;i<v;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();

            topo.push_back(node);

            for(int neighbour:adj[node]){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }
        return topo;
    }
};
