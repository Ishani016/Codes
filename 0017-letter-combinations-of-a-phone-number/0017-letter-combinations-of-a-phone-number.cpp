typedef long long int ll;
#define pb push_back
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        ll n = digits.size();
        vector<string> ans;
        unordered_map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";
        string st = "";
        helper(ans, mp, digits, st, 0);
        return ans;
    }
    void helper(vector<string>& ans, unordered_map<char, string> mp, string digits, string st, ll i) {
        if(i>=digits.size()) {
            return;
        }
        char c = digits[i];
        for(ll ii=0;ii<mp[c].size();ii++) {
            st+= mp[c][ii];
            if(st.size() == digits.size()) {
                ans.pb(st);
            }
            helper(ans, mp, digits, st, i+1);
            st.pop_back();
            
        }
    }
};