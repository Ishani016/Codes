typedef int ll;
#define pb push_back

bool cmp(vector<ll> a, vector<ll> b) {
    return a[1] < b[1];
}

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        ll n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        ll c = 0;
        ll t = intervals[0][1];
        for(ll i=1;i<n;i++) {
            // cout<<intervals[i][0]<<" "<<intervals[i][1]<<" "<<t<<endl;
            if(t>intervals[i][0]) {
                c++;
            } else {
                t = intervals[i][1];
            }
        }
        return c;
    }
};

