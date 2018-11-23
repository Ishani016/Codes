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
    ll n; 	cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++)
    	cin>>a[i];
    ll f=0;
    for(ll i=1;i<=n;i++)
    {
    	if( a[ a[ a[ i] ] ] == i)
    	{
    		f=1;
    		break;
		}
	}
	if(f==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
    return 0;
}

