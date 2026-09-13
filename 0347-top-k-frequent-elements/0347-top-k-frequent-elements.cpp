
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> freq;
        for(auto p : mpp){
            freq.push_back({p.second,p.first});
        }
        sort(freq.begin(),freq.end());
        int m=freq.size();
        for(int i=m-1;i>=m-k;i--){
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};