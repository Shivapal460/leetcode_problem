class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high= *max_element(piles.begin(),piles.end());
        int ans=-1;
        int mid;
        while(low<=high){
            mid= low+(high-low)/2;
            long long hour=0;
            for(int piles:piles){
                hour+=(piles+mid-1)/mid;
            }
            if(hour<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};