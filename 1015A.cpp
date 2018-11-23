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
    ll n,m;	cin>>n>>m;
    map<ll,ll> b;
    while(n--)
    {
    	ll l,r;	cin>>l>>r;
    	for(ll i=l;i<=r;i++)
    		b[i]=1;
	}
	
	map<ll,ll>::iterator it;
	ll c=0;
	for(it=b.begin();it!=b.end();it++)
		if(it->second==1)
			c++;
	cout<<m-c<<endl;
	for(ll i=1;i<=m;i++)
		if(b.find(i)==b.end())
			cout<<i<<" ";
	cout<<endl;
    return 0;
}

