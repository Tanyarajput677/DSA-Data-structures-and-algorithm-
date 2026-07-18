class Solution {
public:
    long long calculatehrs(vector<int>& piles,int k){
        long long total=0;
        for(int i=0;i<piles.size();i++){
            total+=(piles[i]+k-1)/k;

        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int totalhrs=calculatehrs(piles,mid);
            if(totalhrs<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};
