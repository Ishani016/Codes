typedef long long int ll;
#define pb push_back
#define MOD 1000000007
#define INF 2147483647

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //https://www.youtube.com/watch?v=L6qK49vm7o8
        sort(potions.begin(), potions.end());
        ll m = spells.size();
        ll n = potions.size();
        ll p;
        vector<int> v;
        for(ll i=0;i<m;i++) {
            ll l = 0, h = n-1, mid;
            while(l<=h) {
                mid = l + (h-l)/2;
                if((ll)spells[i]*potions[mid] >= success) {
                    h = mid-1;
                } else {
                    l = mid+1;
                }
            }
            v.pb(n-l);

        }
        return v;
    }
};