class Solution {
public:
    int firstocc(vector<int>& arr, int target){
        int n=arr.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

    }
    int lastocc(vector<int>& arr, int target){
        int n=arr.size();
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target){
                ans=mid;
                low=mid+1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;

    }
    int countOccurrences(vector<int>& arr, int target) {
        // Your code goes here
        int first=firstocc(arr,target);
        if(first==-1){
            return 0;
        }
        int last=lastocc(arr,target);
        return last-first+1;
    }
};
