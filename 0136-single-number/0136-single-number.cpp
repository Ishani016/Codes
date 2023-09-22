typedef long long int ll;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ll x = 0;
        ll n = nums.size();
        for(ll i=0;i<n;i++) {
            x ^= nums[i];
        }
        return x;
    }
};