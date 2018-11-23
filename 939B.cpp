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
    ll n,k;	cin>>n>>k;
    ll a[k+1];
    for(ll i=1;i<=k;i++)
    	cin>>a[i];
    vector< pair <ll, pair<ll,ll> > > v;
    for(ll i=1;i<=k;i++)
    {
    	v.pb(mk(n%a[i],mk(i,n/a[i])));
	}
	sort(v.begin(),v.end());
	cout<<v[0].second.first<<" "<<v[0].second.second<<endl;
    return 0;
}

