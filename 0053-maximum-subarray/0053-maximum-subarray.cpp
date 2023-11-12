typedef int ll;
#define pb push_back

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ll n = nums.size();
        ll mi = *max_element(nums.begin(), nums.end());
        if(mi<0) {
            return mi;
        } 
        ll currSum = 0, maxSum = INT_MIN;
        for(ll i=0;i<n;i++) {
            currSum += nums[i];
            if(currSum<0) {
                currSum = 0;
            }
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};