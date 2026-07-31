class Solution {
public:
    vector<vector<int>> primeFactors(vector<int>& queries) {

        vector<vector<int>> ans;

        for (int i = 0; i < queries.size(); i++) {

            int n = queries[i];
            vector<int> factors;

            for (int j = 2; j <= n; j++) {

                while (n % j == 0) {
                    factors.push_back(j);
                    n = n / j;
                }
            }

            ans.push_back(factors);
        }

        return ans;
    }
};
