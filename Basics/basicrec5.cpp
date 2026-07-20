class Solution{
public:
    void reverseanarray(int arr[],int left,int right){
        if(left>=right){
            return;
        }
        swap(arr[left],arr[right]);
        reverseanarray(arr,left+1,right-1);
    }
    void reverse(int arr[], int n){
        reverseanarray(arr,0,n-1);
    }
};
