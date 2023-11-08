typedef long long int ll;
#define pb push_back

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s = "";
        ll o=0, c=0;
        char ch = '(';
        helper(s, v, o, c, n);
        return v;
    }

    void helper(string s, vector<string>& v, ll o, ll c, ll n) {
        // cout<<o<<" "<<c<<" "<<s<<endl;
        if(o>n || c>o) {
            return;
        }
        if(s.size() == 2*n) {
            v.pb(s);
            return;
        } 
        helper(s+"(", v, o+1, c, n);
        helper(s+")", v, o, c+1, n);
    }
};