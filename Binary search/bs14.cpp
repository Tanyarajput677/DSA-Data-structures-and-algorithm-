class Solution {
public:
    int floorSqrt(int n)  {

        int low=1,high=n;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=mid*mid;
        
            if(val<=n){ 
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};
