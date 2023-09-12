typedef long long int ll;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        ll m = text1.size();
        ll n = text2.size();

        ll dp[m+1][n+1];
        memset(dp, 0, sizeof(dp));
        for(ll i=1;i<=m;i++) {
            for(ll j=1;j<=n;j++) {
                if(text1[i-1]==text2[j-1]) {
                    dp[i][j] = dp[i-1][j-1]+1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};