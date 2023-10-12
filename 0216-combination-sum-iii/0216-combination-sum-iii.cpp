typedef int ll;
#define pb push_back
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<ll> v;
        vector<vector<ll>> vec;
        helper(v, vec, 1, 0, k, n);
        return vec;
    }

    void helper(vector<ll>&v, vector<vector<ll>>& vec, ll i, ll cs, ll k, ll n) {
        // cout<<i<<" "<<cs<<" "<<v.size()<<endl;
        if(i>10 || cs>n) {
            return;
        }
        if(v.size()==k) { 
            if(cs==n)  {
                cs=0;
                vec.pb(v);
            }
            return;
        } 
        
        for(ll j=i;j<n;j++) {
            v.pb(j);
            helper(v, vec, j+1, cs+j, k, n);
            v.pop_back();
        }
        
    }
};