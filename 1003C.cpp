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
    ll n,k;	cin>>n>>k;
    ll a[n+1];
    ll s[n+2];
    s[0]=0;
    a[0]=0;
    for(ll i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	s[1]=a[1];
	for(ll i=1;i<=n;i++)
	{
		s[i]=s[i-1]+a[i];
	}
	ld max=INT_MIN;
	for(ll i=1;i<=n-k+1;i++)
	{
		for(ll j=i+k-1;j<=n;j++)
		{	
			ld m=(s[j]-s[i-1])/double(j-i+1);
			if(m>max)
				max=m;
		}
	}
	cout<<fixed<<setprecision(12)<<max<<endl;
    return 0;
}

