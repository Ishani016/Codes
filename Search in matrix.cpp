#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll n,m; cin>>n>>m;
	    ll a[n][m];
	    for(ll i=0;i<n;i++)
	    {
	        for(ll j=0;j<m;j++)
	            cin>>a[i][j];
	    }
	    ll x;   cin>>x;
	    ll i=0,j=m-1,f=0;
	    while(i<n and j>=0)
	    {
	       // cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
	        if(a[i][j]==x)
	        {
	            cout<<1<<endl;
	            f=1;
	            i=n;
	        }
	        else
	        {
	            if(a[i][j]<x)
	                i++;
	            else
	                j--;
	        }
	    }
	    if(f==0)
	        cout<<0<<endl;
	}
	return 0;
}
