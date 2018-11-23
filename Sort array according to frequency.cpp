#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>b;

ll comp(ll x,ll y)
{
    return b[x]>b[y]?1:b[x]==b[y] and x<y?1:0;
}

int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    ll a[n];
	    b.clear();
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[a[i]]++;
	    }
	    sort(a,a+n,comp);
	    for(ll i=0;i<n;i++)
	        cout<<a[i]<<" ";
	    cout<<endl;
	}
	return 0;
}
