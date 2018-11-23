#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert
#define fi first
#define se second
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,m;	cin>>n>>m;
    vector<pair<ll,ll> >v;
    ll s=0,s2=0;
    for(ll i=0;i<n;i++)
    {
    	ll x,y;	cin>>x>>y;
    	s+=x;
    	s2+=y;
    	v.pb(mk(x-y,x));
	}
	sort(v.begin(),v.end());
	if(s2>m)
	{
		cout<<-1<<endl;
		return 0;
	}
	if(s<=m)
	{
		cout<<0<<endl;
		return 0;
	}
	ll c=0;
	for(ll i=v.size()-1;i>=0;i--)
	{
		s= s- v[i].fi;
//		cout<<s<<endl;
		c++;
		if(s<=m)
		{
			cout<<c<<endl;
			return 0;
		}
	}
    return 0;
}

