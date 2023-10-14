typedef long long int ll;
#define pb push_back
#define mk make_pair

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        ll m = grid.size();
        ll n = grid[0].size();
        ll vis[m][n];
        memset(vis, 0, sizeof(vis));
        queue<pair<pair<ll,ll>, ll>> q;
        for(ll i=0;i<m;i++) {
            for(ll j=0;j<n;j++) {
                if(grid[i][j] == 2) {
                    q.push(mk(mk(i,j), 0));
                }
            }
        }
        ll ans = 0;
        while(!q.empty()) {
            pair<pair<ll,ll>, ll> p = q.front();
            q.pop();
            ll f = p.first.first;
            ll s = p.first.second;
            ll c = p.second;
            
            if(vis[f][s]) {
                continue;
            }
            ans = c;
            vis[f][s] = 1;
            if(valid(f+1, s, m, n) && grid[f+1][s] == 1) {
                q.push(mk(mk(f+1, s), c+1));
            }
            if(valid(f-1, s, m, n) && grid[f-1][s] == 1) {
                q.push(mk(mk(f-1, s), c+1));
            }
            if(valid(f, s+1, m, n) && grid[f][s+1] == 1) {
                q.push(mk(mk(f, s+1), c+1));
            }
            if(valid(f, s-1, m, n) && grid[f][s-1] == 1) {
                q.push(mk(mk(f, s-1), c+1));
            }
        }
        for(ll i=0;i<m;i++) {
            for(ll j=0;j<n;j++) {
                if(grid[i][j]==1 and vis[i][j]==0) {
                    return -1;
                }
            }
        }
        return ans;
    }

    bool valid(ll i, ll j, ll m, ll n) {
        return i>=0 and i<m and j>=0 and j<n;
    }
};