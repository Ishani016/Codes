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
    ll c=0;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];	
	}
	sort(a,a+n);
	for(ll i=0;i<m;i++)
	{
		if(a[i]<0)
			c+=abs(a[i]);
	}	
	cout<<c<<endl;
    return 0;
}

