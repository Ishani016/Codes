/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
typedef long long int ll;
class Solution {
public:
    int guessNumber(int n) {
        ll l=0, h=n;
        ll mid = 0;
        while(l<=h){
            mid = (l+h)/2;
            ll x = guess(mid);
            if(x == 0){
                return mid;
            } else if(x==1) {
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        return -1;
    }
};