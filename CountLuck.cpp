#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

typedef long long int ll;
#define mk make_pair
string countLuck(vector<string> matrix, int k) {
    ll m = matrix.size();
    ll n = matrix[0].length();
    queue<pair<pair<ll,ll>, ll>> q;
    ll vis[m][n];
    memset(vis, 0, sizeof(vis));
    for(ll i=0;i<m;i++) {
        for(ll j=0;j<n;j++) {
            if(matrix[i][j]=='M') {
                q.push(mk(mk(i,j), 0));
                vis[i][j] = 1;
            }
        }
    }
    ll c = 0;
    while(!q.empty()) {
        pair<pair<ll,ll>, ll> p = q.front();
        q.pop();
        ll f = p.first.first;
        ll s = p.first.second;
        c = p.second;
        ll fp = 0;
        vis[f][s] = 1;
        if(f!=0 and matrix[f-1][s]!='X' and !vis[f-1][s]) {
            fp++;
        }
        if(f!=m-1 and matrix[f+1][s]!='X' and !vis[f+1][s]) {
            fp++;
        }
        if(s!=0 and matrix[f][s-1]!='X' and !vis[f][s-1]) {
            fp++;
        }
        if(s!=n-1 and matrix[f][s+1]!='X' and !vis[f][s+1]) {
            fp++;
        }
        if(fp>=2)
            c++;
        //up
        if(f!=0 and !vis[f-1][s] and matrix[f-1][s]!='X' and matrix[f-1][s]!='M') {
            if(matrix[f-1][s]=='*') {
                // c++;
                break;
            }
            q.push( mk(mk(f-1, s), c) );
        }
        //down 
        if(f!=m-1 and !vis[f+1][s] and matrix[f+1][s]!='X' and matrix[f+1][s]!='M') {
            if(matrix[f+1][s]=='*') {
                // c++;
                break;
            }
            q.push( mk(mk(f+1, s), c) );
        }
        //right
        if(s!=n-1 and !vis[f][s+1] and matrix[f][s+1]!='X' and matrix[f][s+1]!='M') {
            if(matrix[f][s+1]=='*') {
                // c++;
                break;
            }
            q.push( mk(mk(f, s+1), c) );
        }
        //left
        if(s!=0 and !vis[f][s-1] and matrix[f][s-1]!='X' and matrix[f][s-1]!='M') {
            if(matrix[f][s-1]=='*') {
                // c++;
                break;
            }
            q.push( mk(mk(f, s-1), c) );
        }

    }
    if(c==k)
        return "Impressed";
    return "Oops!";
}

int main()
{
    ll t;   cin>>t;
    while(t--) {
        ll n,m; cin>>n>>m;
        vector<string> matrix;
        string s;
        for(ll i=0;i<n;i++) {
            cin>>s;
            matrix.push_back(s);
        }
        ll k;   cin>>k;
        string ans = countLuck(matrix, k);
        cout<<ans<<endl;
    }
}
