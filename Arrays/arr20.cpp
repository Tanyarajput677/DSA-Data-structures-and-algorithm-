class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        unordered_map<int,int> mp;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                maxlen=i+1;
            }
        
            if(mp.find(sum-k)!=mp.end()){
                maxlen=max(maxlen,i-mp[sum-k]);
            }
            if(mp.find(sum-k)==mp.end()){
                mp[sum]=i;

            }
        }
        return maxlen;

        
    }
};
