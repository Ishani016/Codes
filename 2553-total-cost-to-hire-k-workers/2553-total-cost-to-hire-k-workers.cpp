typedef long long int ll;
#define pb push_back
#define ppi pair<ll,ll>
#define mk make_pair

class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        ll n = costs.size();
        priority_queue<ppi, vector<ppi>, greater<ppi>> pq;
        ll ans = 0;
        ll l=0, r=n-1;
        for(ll i=0;i<candidates;i++) {
            if(l<=r) {
                pq.push(mk(costs[i], i));
                l++;
            }
        }

        for(ll i=n-1;i>n-1-candidates;i--) {
            if(l<=r) {
                pq.push(mk(costs[i], i));
                r--;
            }
        }
        ll i=0;
        while(i++ < k) {
            pair<ll,ll> p = pq.top();
            ans+=p.first;
            pq.pop();
            if(p.second<l && l<=r)  {
                pq.push(mk(costs[l], l));
                l++;
            } else if(p.second>r && l<=r) {
                pq.push(mk(costs[r], r));
                r--;
            }
        }
        return ans;
    }
};