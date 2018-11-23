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
    for(ll i=0;i<n;i++)
    	cin>>a[i];
    sort(a,a+n);
    double s=0;
    ll c=0;
    for(ll i=n-1;i>=0;i--)
    {
    	s+=a[i];
	}
	double x=4.5*n;
	if(s>=x)
	{
		cout<<0<<endl;	
	}	
	else
	{
	
		for(ll i=0;i<n;i++)
	    {
	    	if(s<x)
	    	{
	    		s+=5-a[i];
	    		if(a[i]!=5)
	    			c++;
	    			
			}else break;
		}
		
	cout<<c<<endl;	
	}
    
    return 0;
}

