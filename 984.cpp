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
    for(ll i=0;i<n;i++)
    {
    	ll x;	cin>>x;
    	v.pb(x);
	}
	sort(v.begin(),v.end());
	if(n&1)
		cout<<v[n/2]<<endl;
	else
		cout<<v[(n-1)/2]<<endl;
    return 0;
}

