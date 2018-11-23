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
    ll a[6][6];
    for(ll i=1;i<=5;i++)
    {
    	for(ll j=1;j<=5;j++)
    		cin>>a[i][j];
	}
    ll x,y;
    for(ll i=1;i<=5;i++)
    {
    	for(ll j=1;j<=5;j++)
    	{
    		if(a[i][j]==1)
    		{
    			x=i;
    			y=j;
			}
		}
	}
	cout<<abs(x-3)+abs(y-3)<<endl;
    return 0;
}

