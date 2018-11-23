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
    ll t;	cin>>t;
    ll x[26],y[26];
	x[0]=1,x[1]=1,x[2]=1;
	y[0]=1,y[1]=2,y[2]=4;
	for(ll i=3;i<=25;i++)
	{
		if(i&1)
			x[i]=x[i-1]*2+1;
		else
			x[i]=x[i-1]*2-1;
		y[i]=y[i-1]*2;
	}
    while(t--)
    {
    	ll n;	cin>>n;
    	cout<<x[n]<<" "<<y[n]<<" ";
	}
    return 0;
}

