class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> my_set;
        vector<int> result;
        for(int num1 : nums1){
            my_set.insert(num1);
        }

        for(int num2 : nums2){
            if(my_set.find(num2) != my_set.end()){
                result.push_back(num2);
                my_set.erase(num2);
            }
        }

        return result;
    }
};