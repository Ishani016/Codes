typedef long long int ll;
class Solution {
public:
    int rob(vector<int>& nums) {
        ll n = nums.size();
        if(n==1) {
            return nums[0];
        }
        if(n==2) {
            return max(nums[0], nums[1]);
        }
        ll dp[n];
        dp[0] = nums[0];
        dp[1] = max(nums[1], nums[0]);
        for(ll i=2;i<n;i++) {
            dp[i] = max(dp[i-2]+nums[i], dp[i-1]);
        }
        // for(ll i=0;i<=n-1;i++) {
        //     cout<<dp[i]<<" ";
        // }
        return dp[n-1];
    }
};