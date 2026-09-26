class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long  sum=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
           int largest=nums[i];
           int smallest=nums[i];
            for(int j=i+1;j<=n-1;j++){
                largest=max(largest,nums[j]);
                smallest=min(smallest,nums[j]);
                sum=sum+(largest-smallest);
            }
        }
        return sum;
    }
};