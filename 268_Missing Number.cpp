class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorSum = nums.size();

        for(int i = 0; i < nums.size(); i++){
            xorSum ^= i ^ nums[i];
        }

        return xorSum;
    }
};