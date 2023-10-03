typedef int ll;
#define pb push_back

bool cmp(vector<ll> a, vector<ll> b) {
    if(a[1] < b[1]) {
        return true;
    }
    if(a[0]==b[0] && b[0] > b[1]) {
        return true;
    }
    return false;
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        ll n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        for(ll i=0;i<n;i++) {
            ll x = intervals[i][0];
            ll y = intervals[i][1];
            cout<<x<<" "<<y<<endl;
        }
        ll c = 0;
        ll upper;
        for(ll i=0;i<n;) {
            upper = intervals[i][1];
            while(i<n-1 and intervals[i+1][0] < upper) {
                c++;
                i++;
            }
            i++;
        }
        return c;
    }
};

