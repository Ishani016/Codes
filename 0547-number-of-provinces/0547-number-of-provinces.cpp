typedef long long int ll;
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        ll n = isConnected.size();
        vector<ll> vis(n,0);
        ll c = 0;
        for(ll i=0;i<n;i++) {
            if(vis[i] == 0) {
                vis[i] = 1;
                dfs(isConnected, vis, i);
                c++;
            }
        }
        return c;
    }

    void dfs(vector<vector<int>>& isConnected, vector<ll>& vis, ll x) {
        ll n = isConnected.size();
        for(ll j=0;j<n;j++){
            ll p = isConnected[x][j];
            if(vis[j] || p==0) {
                continue;
            }
            vis[j]++;
            dfs(isConnected, vis, j);
        }
    }
};