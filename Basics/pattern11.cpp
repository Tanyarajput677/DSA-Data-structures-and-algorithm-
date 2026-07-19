class Solution {
public:
    void pattern11(int n) {
        for(int i=1;i<=n;i++){
            int start;
            if(i % 2==1){
                start=1;
            }
            else{
                start=0;
            }
            for(int j=1;j<=i;j++){
                cout<<start<<" ";
                start=1-start;
            }
            cout<<endl;
        }
        return ;

    }
};
