typedef long long int ll;
#define MOD 1000000007
#define pn push_back

class Solution {
public:
    int numTilings(int n) {
        ll dp[1001];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 5;
        for(ll i=4;i<=n;i++) {
            dp[i] = 2*dp[i-1]+dp[i-3];
            dp[i] %= MOD;
        }
        // for(ll i=0;i<n;i++) {
        //     cout<<i<<":"<<dp[i]<<endl;
        // }
        return dp[n];

    }
};