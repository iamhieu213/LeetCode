class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int num1 : nums1){
            mp[num1]++;
        }

        for(int num2 : nums2){
            if(mp[num2] > 0){
                result.push_back(num2);
            }

            mp[num2]--;
        }

        return result;
    }
};