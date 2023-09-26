typedef long long int ll;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        ll c = 0;
        ll m = grid.size();
        ll n = grid[0].size();
        vector<vector<ll>> vis(m,  vector<ll> (n, 0));
        for(ll i=0;i<m;i++) {
            for(ll j=0;j<n;j++) {
                if(!vis[i][j] && grid[i][j] == '1') {
                    // cout<<"parent::"<<i<<" "<<j<<endl;
                    // vis[i][j] = 1;
                    dfs(grid, vis, i, j);
                    c++;
                }
            }
        }
        return c;
    }

    void dfs(vector<vector<char>>& grid, vector<vector<ll>>& vis, ll x, ll y) {
        if(x >= grid.size() || y>=grid[0].size() || x<0 || y<0) {
            return;
        }
        if(grid[x][y] == '0' || vis[x][y] == 1) {
            return;
        }       
        // cout<<"child::"<<x<<" "<<y<<endl;
        vis[x][y] = 1;
        dfs(grid, vis, x-1, y);
        dfs(grid, vis, x+1, y);
        dfs(grid, vis, x, y-1);
        dfs(grid, vis, x, y+1);
    }
};