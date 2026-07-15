class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
    
        int largest=nums[0];
        int secondlargest=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>largest){
                secondlargest=largest;
                largest=nums[i];
            }
            else if(nums[i]>secondlargest && nums[i]<largest){
                secondlargest=nums[i];
            }
        }
        return secondlargest;
      
    }
};
