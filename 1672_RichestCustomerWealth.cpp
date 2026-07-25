class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int m = accounts.size();
        for(int i = 0; i < m; i++){
            int n = accounts[i].size();
            int currentWealth = 0;
            for(int j = 0; j < n; j++){
                currentWealth += accounts[i][j];
            }

            maxWealth = max(maxWealth, currentWealth);
        }

        return maxWealth;
    }
};