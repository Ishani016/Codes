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
    map <ll,ll>  b;
    for(ll i=0;i<n;i++)
    {
    	ll a,x;	cin>>a>>x;
    	b[a]=x;
	}
    ll m;	cin>>m;
    for(ll i=0;i<m;i++)
    {
    	ll c,y;	cin>>c>>y;
    	if(b.find(c)!=b.end() && b[c]>y)
    		continue;
    	else
    		b[c]=y;
	}
	map <ll,ll>::iterator it;
	ll s=0;
	for(it=b.begin();it!=b.end();it++)
	{
		s+=it->second;
	}
	cout<<s<<endl;
    return 0;
}

