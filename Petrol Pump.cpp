#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define mk make_pair
#define pb push_back
#define in insert

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    ll n;   cin>>n;
    ll a[n];
    ll sum = 0;
    for(ll i=0;i<n;i++) {
        cin>>a[i];
        sum+= a[i];
    }
    bool dp[n+1][sum+1];
    memset(dp, false, sizeof(dp));
    for(ll i=0;i<=n;i++) {
        dp[i][0] = true;
    }

    for(ll i=1;i<=n;i++) {
        for(ll j=1;j<=sum;j++) {
            if(a[i]>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j-a[i]];
        }
    }
    ll t = sum/2;
    while(t) {
        if(dp[n][t]==true) {
            cout<<"Sum found "<<max(t,sum-t)<<endl;
            break;
        }
        t--;
    }
    return 0;
}
