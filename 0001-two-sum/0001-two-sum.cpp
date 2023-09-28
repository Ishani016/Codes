typedef int ll;
#define pb push_back
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ll n = nums.size();
        vector<ll> v;
        for(ll i=0;i<n;i++) {
            for(ll j = i+1;j<n;j++) {
                if(nums[i]+nums[j] == target) {
                    v.pb(i);
                    v.pb(j);
                    return v;
                }
            }
        }
        return v;
    }
};