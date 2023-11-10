typedef long long int ll;
#define pb push_back

class Solution {
public:
    int rob(vector<int>& nums) {
        ll n = nums.size();
        if(n==1) return nums[0];
        ll dp[n];
        memset(dp, 0, sizeof(dp));
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(ll i=2;i<n;i++) {
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }
        return dp[n-1];
    }
};