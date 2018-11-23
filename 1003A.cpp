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
    ll n;	cin>>n;
    ll a[n];
    ll h[101];
    memset(h,0,sizeof(h));
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	h[ a[i] ]++;
	}
	ll m=*max_element(h,h+101);
	cout<<m;
    return 0;
}

