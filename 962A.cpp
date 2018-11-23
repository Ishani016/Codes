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
    ll n;	cin>>n;
    ll a[n];
    double s=0,s1=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	s+=a[i];
	}
	for(ll i=0;i<n;i++)
	{
		s1+=a[i];
		if(s1>=ceil(s/2))
		{
			cout<<i+1<<endl;
			break;
		}
	}
    return 0;
}

