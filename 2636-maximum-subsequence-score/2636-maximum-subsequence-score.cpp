typedef long long int ll;
#define mk make_pair
#define pb push_back

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    return a.first > b.first;
}
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        /*
        1. Make pair and then sort it in descending order
        2. Track min element from nums1 in heap
        3. Pop min element from heap and adjust sum accordingly
        */
        ll ans = 0;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll n = nums1.size();
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++) {
            v.pb(mk(nums2[i], nums1[i]));
        }
        sort(v.begin(), v.end(), cmp);
        ll s=0;
        for(ll i=0;i<n;i++) {
            s += v[i].second;
            pq.push(v[i].second);
            if(pq.size() > k) {
                s -= pq.top();
                pq.pop();
            } 
            if(pq.size() == k) {
                ans = max(ans, s * v[i].first);
            }
        }
        return ans;
    }
};