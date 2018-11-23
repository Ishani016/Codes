#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() 
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    ll a[n+1];    
	    for(ll i=1;i<=n;i++)
	        cin>>a[i];
	    ll rp[n+1];
	    rp[0]=0;
	    rp[1]=a[1];
	    ll m;
	    for(ll i=2;i<=n;i++)
	    {
	        m=a[i];
	        for(ll j=1;j<i;j++)
	        {
	            ll y=i-(i/j)*j;
	            ll x= (i/j)*rp[j] + rp[y];
	            m=max(m,x);
	        }
	        rp[i]=m;
	    }
	    cout<<rp[n]<<endl;
	}
	return 0;
}
