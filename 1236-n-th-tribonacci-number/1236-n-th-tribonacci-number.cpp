typedef long long int ll;

class Solution {
public:
    int tribonacci(int n) {
        if(n<2) {
            return n;
        }
        vector<ll> dp(38, 0);
        dp[1] = 1;
        dp[2] = 1;
        for(ll i=3;i<=n;i++) {
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
        }
        return dp[n];
    }
};