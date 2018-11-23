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
    ll n;	cin>>n;
    ll c=0;
    for(ll i=0;i<n;i++)
    {
    	ll x;	cin>>x;
    	if(x==1)
    	{
    		c++;
		}
	}
	if(c==0)
		cout<<"Easy\n";
	else
		cout<<"Hard\n";
    return 0;
}

