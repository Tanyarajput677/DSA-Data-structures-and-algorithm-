class Solution{
public:
    int minimumMultiplications(vector<int> &arr,int start, int end) {
        vector<int> dist(100000,1e9);
        queue<int> q;
        dist[start]=0;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i=0;i<arr.size();i++){
                int newnode=(node*arr[i])% 100000;
                if(dist[newnode]>dist[node]+1){
                    dist[newnode]=dist[node]+1;
                    if(newnode==end){
                        return dist[newnode];
                    }
                    q.push(newnode);
                }
            }
        }
        return -1;
   
    }
};
