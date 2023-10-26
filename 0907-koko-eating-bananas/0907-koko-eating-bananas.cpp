typedef long long int ll;
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll n = piles.size();
        ll low = 1, high = *max_element(piles.begin(), piles.end()), mid;
        while(low<=high) {
            mid = (low+high)/2;
            ll req = 0;
            for(ll i=0;i<n;i++) {
                req += ceil(piles[i]*1.0/mid);
            }       
            if(req > h) {
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        return low;
    }
};