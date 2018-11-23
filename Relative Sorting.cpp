#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll n,m;   cin>>n>>m;
	    vector<ll> a,bt;
	    map<ll,ll>b;
	    for(ll i=0;i<n;i++)
	    {
	        ll x;   cin>>x;
	        a.push_back(x);
	    }
	    for(ll i=0;i<m;i++)
	    {
	        ll x;   cin>>x;
	        b[x]=i;
	    }
	    map<ll,ll>::iterator it;
	    multimap<ll,ll>mp;
	    for(ll i=0;i<n;i++)
	    {
	        it=b.find(a[i]);
	       // it!=b.end() and a[i]==3?cout<<"found\n":cout<<"not found\n";
	        if(it!=b.end())
	        {
	            ll x=it->second;
	            mp.insert(pair<ll,ll>(x,a[i]));
	        }
	    }
	    multimap<ll,ll>::iterator i;
	    for(i=mp.begin();i!=mp.end();i++)
	        cout<<i->second<<" ";
	    for(ll i=0;i<n;i++)
	    {
	        if(b.find(a[i])==b.end())
	            bt.push_back(a[i]);
	    }
	    sort(bt.begin(),bt.end());
	    for(ll j=0;j<bt.size();j++)
	        cout<<bt[j]<<" ";
	    cout<<endl;
	}
	return 0;
}
