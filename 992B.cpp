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
    ll l,r,x,y;	cin>>l>>r>>x>>y;
    set <ll> v;
    ll c=0;
    for(ll i=1;i*i<=y;i++)
	{
		if(y%i==0)
		{
			v.in(i);
			if(y/i!=i)
				v.in(y/i);	
		}	
	}
	set<ll>::iterator i;
	for(i=v.begin();i!=v.end();i++)
	{
		ll t=*i;
		ll j=x*y/t;
		if(j*t==x*y && j>=l && j<=r && v.find(j)!=v.end() && v.find(x)!=v.end() && __gcd(t,j)==x && t>=l && t<=r)
			c++;
	}
	cout<<c;
    return 0;
}

