#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    double k,n,s,p;	cin>>k>>n>>s>>p;
    ll ans=ceil(n/s) * k;
    ans=ceil(ans/p);
    cout<<ans<<endl;
    return 0;
}

