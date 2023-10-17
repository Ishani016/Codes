typedef long long int ll;
#define pb push_back

class SmallestInfiniteSet {
public:
    priority_queue<ll> pq;
    unordered_map<ll,ll> mp;
    SmallestInfiniteSet() {
        for(ll i=1;i<=1000;i++) {
            pq.push(i * -1);
            mp[i]++;
        }
    }
    
    int popSmallest() {
        ll t = pq.top() * -1;
        mp.erase(t);
        pq.pop();
        return t;
    }
    
    void addBack(int num) {
        if(mp[num] < 1) {
            pq.push(num * -1);
            mp[num]++;
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */