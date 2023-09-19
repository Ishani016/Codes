typedef long long int ll;
#define pb push_back

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        ll n = rooms.size();
        if(!n) {
            return false;
        }
        unordered_map<ll, ll> vis;
        dfs(rooms, vis, 0, n);
        for(ll i=0;i<n;i++) {
            for(ll j=0;j<rooms[i].size();j++) {
                if(vis[rooms[i][j]] == 0) {
                    return false;
                }
            }
        }
        return true;
    }

    void dfs(vector<vector<int>>&rooms, unordered_map<ll, ll>& vis, ll i, ll n) {
        for(ll j=0;j<rooms[i].size();j++) {
            ll x = rooms[i][j];
            if(vis[x] || x == i) {
                continue;
            }
            // cout<<x<<" ";
            vis[x]++;
            dfs(rooms, vis, x, n);
        }
    }
};