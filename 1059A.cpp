#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,l,a;	cin>>n>>l>>a;
    if(a>l)
    {
    	cout<<0<<endl;
    	return 0;
	}
    vector<pair<ll ,ll> > v;
    for(ll i=0;i<n;i++)
    {
    	ll x,y;	cin>>x>>y;
    	v.pb(mk(x,y));
	}
	sort(v.begin(),v.end());
	ll s=0,ans=n>0?v[0].first/a:0;
	for(ll i=0;i<n-1;i++)
	{
		if(v[i+1].first-v[i].second-v[i].first>=a)
			ans+=(v[i+1].first-v[i].second-v[i].first)/a;
//		cout<<ans<<" ";
	}
//	cout<<ans<<endl;
	if(n!=0)	s=v[n-1].first+v[n-1].second;
//	cout<<s<<endl;
	ans+=(l-s)/a;
	cout<<ans<<endl;
    return 0;
}

