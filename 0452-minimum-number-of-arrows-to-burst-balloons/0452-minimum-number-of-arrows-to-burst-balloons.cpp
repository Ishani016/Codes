typedef int ll;
#define pb push_back

bool cmp(vector<ll> a, vector<ll> b) {
    return a[1] < b[1];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        ll n = points.size();
        sort(points.begin(), points.end(), cmp);
        for(ll i=0;i<n;i++) {
            cout<<points[i][0]<<" "<<points[i][1]<<endl;
        }
        ll c = 1;
        ll temp = points[0][1], i=1;
        while(i<n) {
            // cout<<"inside while for: "<<i<<" "<<points[i][0]<<" "<<temp<<endl;
            if(points[i][0] > temp) {
                // cout<<"updating count for "<<points[i][0]<<" "<<temp<<endl;
                c++;
                temp = points[i][1];
            }
            i++;
        }
        return c;
    }
};