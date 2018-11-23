#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ipair;
#define pb push_back
#define mk make_pair
int main() 
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    ll a[n],b[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
	    for(ll i=0;i<n;i++)
	        cin>>b[i];
	    vector<pair<ipair,ll> >v;
	    for(ll i=0;i<n;i++)
	        v.pb( mk( mk(b[i],a[i]) ,i+1) );
	    sort(v.begin(),v.end());
	    cout<<v[0].second<<" ";
	    ll x=0;
	    for(ll i=1;i<n;i++)
	    {
	        if(v[i].first.second>=v[x].first.first)
	        {
	            cout<<v[i].second<<" ";
	            x=i;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
