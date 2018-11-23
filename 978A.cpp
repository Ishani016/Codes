#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    vector <ll> v;
    ll a[n];
    ll h[1001];
    memset(h,0,sizeof(h));
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	h[ a[i] ]++;
	}
	for(ll i=n-1;i>=0;i--)
	{
		if(h[a[i]]>0)
		{
			v.pb(a[i]);
			h[ a[i] ]=0;
		}		
	}
	cout<<v.size()<<endl;
	for(ll i=v.size()-1;i>=0;i--)
		cout<<v[i]<<" ";	
    return 0;
}

