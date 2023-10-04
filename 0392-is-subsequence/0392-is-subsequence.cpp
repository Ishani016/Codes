typedef long long int ll;
#define pb push_back
class Solution {
public:
    bool isSubsequence(string s, string t) {
        ll m = s.size();
        ll n = t.size();
        ll dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        for(ll i=1;i<=m;i++) {
            for(ll j=1;j<=n;j++) {
                if(s[i-1]==t[j-1]) {
                    dp[i][j] = dp[i-1][j-1]+1;
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        // for(ll i=1;i<m;i++) {
        //     for(ll j=1;j<n;j++) {
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return dp[m][n] >=m;
    }
};