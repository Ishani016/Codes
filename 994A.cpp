#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,m;	cin>>n>>m;
    ll a[n];
    ll h[10];
    memset(h,0,sizeof(h));
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(ll i=0;i<m;i++)
	{
		ll x;	cin>>x;
		h[x]++;
	}
	for(ll i=0;i<n;i++)
	{
		if( h[a[i]] !=0 )
			cout<<a[i]<<" ";
	}
	cout<<endl;
    return 0;
}

