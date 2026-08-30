class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        for(int node=0;node<n;node++){
            for(int neighbour:graph[node]){
                adj[neighbour].push_back(node);
                indegree[node]++;

            }

        }


        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        
        }

        vector<int> safenodes;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            safenodes.push_back(node);

            for(int neighbour:adj[node]){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }
        sort(safenodes.begin(),safenodes.end());
        return safenodes;
    }
};
