typedef long long int ll;
class Solution {
public:
    bool isHappy(int n) {
        cout<<n<<endl;
        if(n<5) {
            return n==1;
        }
        ll s = 0;
        while(n) {
            s+= (n%10)*(n%10);
            n/=10;
        }
        return isHappy(s);
    }
};