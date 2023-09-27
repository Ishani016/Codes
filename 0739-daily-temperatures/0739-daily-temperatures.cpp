typedef int ll;
#define pb push_back
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<ll> st;
        ll n = temp.size();
        vector<ll> v(n,0);
        for(ll i=0;i<n;i++) {
            while(!st.empty() && temp[st.top()] < temp[i]){
                v[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);            
        }
        return v;
    }
};