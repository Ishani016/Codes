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
    ll a[n],s=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>a[i];
    	s+=a[i];
	}	
    ll k=*max_element(a,a+n);
    ll sa;
    while(true)
    {
    	sa=0;
    	for(ll i=0;i<n;i++)
    	{
    		sa+=k-a[i];
		}
		if(sa>s)
		{
			cout<<k<<endl;
			break;
		}
		k++;
	}
    return 0;
}

