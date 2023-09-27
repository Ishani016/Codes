typedef long long int ll;
class StockSpanner {
public:
    stack<pair<ll,ll>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        ll c = 1;
        while(!st.empty() and st.top().first <= price) {
            cout<<price<<" "<<st.top().first<<" "<<st.top().second<<endl;
            c += st.top().second;
            st.pop();
        }
        st.push({price, c});

        return c;
    }

};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */