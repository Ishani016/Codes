typedef long long int ll;
#define pb push_back
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        ll n = strs.size();
        for(ll i=0;i<n;i++) {
            string t = strs[i];
            sort(t.begin(), t.end());
            mp[t].pb(strs[i]);
        }
        vector<vector<string>> vec;
        for(auto p : mp) {
            vec.pb(p.second);
        }
        return vec;
    }
};