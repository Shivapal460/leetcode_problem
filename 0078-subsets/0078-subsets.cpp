class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({}); 
        for (int num : nums) {
            int size = ans.size();
            for (int i = 0; i < size; i++) {
                vector<int> newSubset = ans[i];
                newSubset.push_back(num);
                ans.push_back(newSubset);
            }
        }
        return ans;
    }
};