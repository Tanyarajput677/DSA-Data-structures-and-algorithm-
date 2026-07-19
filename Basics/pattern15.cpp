class Solution {
public:
    void pattern15(int n) {
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<< char('A'+j-1);
            }
            cout<<endl;
        }

    }
};
