typedef int ll;
#define pb push_back

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ll n = candidates.size();
        vector<vector<ll>> vec;
        vector<ll> v;
        helper(candidates, target, vec, v, 0, n, target);
        return vec;
    }

    void helper(vector<ll>& candidates, ll target, vector<vector<ll>>& vec, vector<ll>& v, ll i, ll n, ll sum) {
        // cout<<sum<<" "<<i<<endl;
        if(sum<0 || i==n) {
            return;
        }
        if(sum == 0) {
            vec.pb(v);
            return;
        }
        for(ll ii=i;ii<n;ii++) {
            v.pb(candidates[ii]);
            helper(candidates, target, vec, v, ii, n, sum-candidates[ii]);
            v.pop_back();
        }
    }
};