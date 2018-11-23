#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main() 
{
	ll t;   cin>>t;
	vector<ll>v;
	while(t--)
	{
	    ll x;   cin>>x;
	    if(v.empty())
	    {
	        cout<<x<<endl;
	        v.pb(x);
	        continue;
	    }
	    ll f=0;
	    for(ll i=0;i<v.size();i++)
	    {
	        if(v[i]>x)
	        {
	            v.insert(v.begin()+i,x);
	            f=1;
	            break;
	        }
	    }
	    if(f==0)
	        v.pb(x);
	    ll n=v.size();
	    if(n&1)
	        cout<<v[n/2]<<endl;
	    else 
	        cout<<(v[n/2]+v[n/2 -1])/2<<endl;
	}
	return 0;
}
