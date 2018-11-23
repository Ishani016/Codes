#include <bits/stdc++.h>
using namespace std;
typedef unsigned long int ll;

ll cat(ll n)
{
    if(n<=1)
        return 1;
    ll ans=0;
    for(ll i=0;i<n;i++)
        ans+=cat(i)*cat(n-1-i);
    return ans;
}

int main() 
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    ll ans=cat(n);
	    cout<<ans<<endl;
	}
	return 0;
}
