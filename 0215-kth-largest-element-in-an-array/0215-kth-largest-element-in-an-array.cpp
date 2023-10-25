typedef int ll;
#define pb push_back
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        ll n = nums.size();
        priority_queue<ll, vector<ll>, greater<ll> >pq; //minHeap
        for(ll i=0;i<n;i++) {
            pq.push(nums[i]);
            if(pq.size()>k) {
                pq.pop();
            }
            cout<<pq.top()<<endl;
        }
        return pq.top();
    }
};