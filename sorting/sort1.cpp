class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int mini=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[mini]){
                    mini=j;
                }
                
            }
            swap(nums[i],nums[mini]);

        }
        return nums;

    }
};
