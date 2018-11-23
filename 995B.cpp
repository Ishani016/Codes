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
    vector <ll> v;
    for(ll i=0;i<2*n;i++)
    {
    	ll x;	cin>>x;
    	v.pb(x);
	}
	ll c=0;
	for(ll i=0;i<2*n;i++)
	{
		ll f=v[i];
		for(ll j=i+1;j<2*n;j++)
		{
			if(v[i]==v[j])
			{
				for(ll k=j;k>=i+2;k--)
				{
					c++;
					swap(v[k],v[k-1]);
				}	
			}
		}
	}
	cout<<c;
    return 0;
}

