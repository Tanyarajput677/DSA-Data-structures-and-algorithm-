class Solution {
    public:
    void dfs(int node,vector<pair<int,int>> adj[],vector<int>& vis,stack<int>& st){
        vis[node]=1;
        for(auto it:adj[node]){
            int v=it.first;
            if(!vis[v]){
                dfs(v,adj,vis,st);
            }
        }
        st.push(node);

    }
    vector < int > shortestPath(int N, int M, vector < vector < int >> & edges) {
        vector<pair<int,int>> adj[N];
        for(auto it:edges){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            adj[u].push_back({v,wt});
        }
        vector<int> vis(N,0);
        stack<int>st;
        for(int i=0;i<N;i++){
            if(!vis[i]){
                dfs(i,adj,vis,st);
            }
        }
        vector<int> dis(N,INT_MAX);
        dis[0]=0;
        while(!st.empty()){
            int node=st.top();
            st.pop();
            if(dis[node]!=INT_MAX){
                for(auto it:adj[node]){
                    int v=it.first;
                    int wt=it.second;
                    if(dis[node]+wt<dis[v]){
                        dis[v]=dis[node]+wt;
                    }

                }
            }
        }
        for(int i=0;i<N;i++){
           if(dis[i]==INT_MAX){
            dis[i]=-1;
           }
        }
        return dis;

    }
};

