	#include<bits/stdc++.h>
	using namespace std;
	typedef long long int ll;
	typedef long double ld;
	#define pb push_back
	#define inf INT_MAX
	#define mk make_pair
	#define MOD 1000000007
	#define in insert
	
		ll p[31];
		vector <ll> v;
			
	ll power(ll x,ll y)
	{
		ll ans=1;
		while(y)
		{
			if(y&1)
				ans=ans*x;
			x=x*x;
			y=y>>1;
		}
		return ans;
	}
	void precompute()
	{
			for(ll i=0;i<31;i++)
			{
				p[i]=power(2,i);
			}	
			for(ll i=0;i<31;i++)
			{
				for(ll j=0;j<31;j++)
				{
					if(i!=j)
						v.pb(p[i]+p[j]);
				}	
			}	
			sort(v.begin(),v.end());	
	}
	int main()
	{
	    ios_base::sync_with_stdio(false);cin.tie(NULL);
	    ll t;	
		cin>>t;
		precompute();
	    while(t--)
	    {
	    	ll n;	
			cin>>n;
			ll ans=lower_bound(v.begin(),v.end(),n)-v.begin();
			ll myanswer=min(abs(v[ans]-n),abs(v[ans-1]-n));
			cout<<myanswer<<endl;
		}
	    return 0;
	}

