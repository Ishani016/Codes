#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert

ll maX(ll a,ll b,ll c)
{
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
		
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    {
    	cin>>a[i];
	}
	
    ll dp[n][n+1];
    for(ll i=1;i<=n;i++)
    {    		
    	for(ll j=1;j<=n;j++)
    	{
    		if(i==1)
    			dp[1][j]=a[j];
    		else if(j<i)
    			dp[i][j]=1;
    		else
    			dp[i][j]=dp[i-1][j-1]^dp[i-1][j];
		}
	}
	
	for(ll i=2;i<=n;i++)
    {
    	for(ll j=2;j<=n;j++)
    	{
    		dp[i][j]=maX(dp[i][j],dp[i-1][j],dp[i-1][j-1]);
    	}
    }
//    for(ll i=1;i<=n;i++)
//    {
//    	for(ll j=1;j<=n;j++)
//    		cout<<dp[i][j]<<" ";
//    	cout<<endl;
//	}
    ll q;	cin>>q;
    while(q--)
    {
    	ll ans=1;
    	ll l,r;	cin>>l>>r;
    	cout<<dp[r-l+1][r]<<endl;	
	}
    return 0;
}

