typedef long long int ll;
#define pb push_back
#define mk make_pair

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        ll m = maze.size();
        ll n = maze[0].size();
        queue<pair<pair<ll,ll>, ll>> q;
        q.push(mk(mk(entrance[0], entrance[1]), 0));
        ll vis[m][n];
        memset(vis, 0, sizeof(vis));
        while(!q.empty()) {
            pair<pair<ll,ll>, ll> p = q.front();
            q.pop();
            ll f = p.first.first;
            ll s = p.first.second;
            ll c = p.second;
            if(vis[f][s]) {
                continue;
            }
            vis[f][s] = 1;
            // cout<<f<<" "<<s<<" "<<maze[f][s]<<" "<<c<<endl;
            if((f==0||f==m-1||s==0||s==n-1) && !(f==entrance[0] && s==entrance[1]) && maze[f][s]=='.') {
                return c;
            }
            if(valid(f+1,s,m,n) && maze[f+1][s] == '.') {
                q.push(mk(mk(f+1, s), c+1));
            }
            if(valid(f-1, s, m, n) && maze[f-1][s] == '.') {
                q.push(mk(mk(f-1, s), c+1));
            }
            if(valid(f, s+1, m, n) && maze[f][s+1] == '.') {
                q.push(mk(mk(f, s+1), c+1));
            }
            if(valid(f, s-1, m, n) && maze[f][s-1] == '.') {
                q.push(mk(mk(f, s-1), c+1));
            }
        }
        return -1;
    }

    bool valid(ll i, ll j, ll m, ll n) {
        return i>=0 and i<m and j>=0 and j<n;
    }
};