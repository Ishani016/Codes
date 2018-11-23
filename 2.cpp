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
    ll t;	cin>>t;
    while(t--)
    {
    	ll n;	cin>>n;
    	ll a[n+1];
    	for(ll i=1;i<=n;i++)
    		cin>>a[i];
    	vector<pair<ll,ll> >v;
    	for(ll i=1;i<=n;i++)
    	{
//    		cout<<a[a[i]]<<" "<<a[i]<<endl;
			if(a[a[i]]>=1 and a[a[i]]<=n)
    		v.pb(mk(a[ a[i] ],a[i]));
		}
		sort(v.begin(),v.end());
//		for(ll i=0;i<n;i++)
//    	{
//    		cout<<v[i].first<<" "<<v[i].second<<endl;
//    	}
		ll i,f=0;
		for(i=0;i<n;i++)
		{
			if(v[i].first==v[i+1].first and v[i].second!=v[i+1].second)
			{
				cout<<"Truly Happy\n";
				f=1;
				break;
			}
		}
		if(f==0)
			cout<<"Poor Chef\n";
	}
    return 0;
}

