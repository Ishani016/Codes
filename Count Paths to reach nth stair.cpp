#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007

ll a[100001];
void countWays()
{
    a[0]=0;
    a[1]=1;
    a[2]=2;
    for(ll i=3;i<100001;i++)
        a[i]=(a[i-1]+a[i-2])%MOD;
}

int main() 
{
	ll t;   cin>>t;
	countWays();
	while(t--)
	{
	    ll n;   cin>>n;
	    cout<<a[n]<<endl;
	}
	return 0;
}
