#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

ll a[101][101];

void countPath()
{
    for(ll i=0;i<101;i++)
        a[0][i]=1;
    for(ll i=0;i<101;i++)
        a[i][0]=1;
    for(ll i=1;i<101;i++)
    {
        for(ll j=1;j<101;j++)
            a[i][j]=(a[i-1][j]+a[i][j-1])%MOD;
    }
}

int main() 
{
	ll t;   cin>>t;
	countPath();
	while(t--)
	{
	    ll n,m; cin>>n>>m;
	    cout<<a[n-1][m-1]<<endl;
	}
	return 0;
}
