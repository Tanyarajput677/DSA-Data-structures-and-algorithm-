class Solution {
public:
    int ceilval(vector<int>& nums, int x){
        int n = nums.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=x){
                ans=nums[mid];
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
    int floorval(vector<int>& nums, int x){
        int n = nums.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<=x){
                ans=nums[mid];
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
        
    }
    vector<int> getFloorAndCeil(vector<int>& nums, int x) {
        int floor=floorval(nums,x);
        int ceil=ceilval(nums,x);
        return {floor,ceil};
   
    }
};
