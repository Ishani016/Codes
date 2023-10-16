typedef int ll;
#define pb push_back
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        ll n = nums.size();
        priority_queue<ll>pq;
        for(ll i=0;i<n;i++) {
            pq.push(nums[i]);
        }
        ll c = 0;
        while(!pq.empty()) {
            c++;
            if(c==k) {
                return pq.top();
            }
            pq.pop();

        }
        return -1;
    }
};