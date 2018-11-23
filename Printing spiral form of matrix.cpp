#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll a[4][4];
	    ll n=4;
	    for(ll i=0;i<4;i++)
	    {
	        for(ll j=0;j<4;j++)
	            cin>>a[i][j];
	    }
	    ll r=0,d=n-1,u=0,l=n-1;
	    while(r<l && u<d)
	    {
	        for(ll k=r;k<=d;k++) //printing from left to right
	            cout<<a[r][k]<<" ";
	        r++;
	        for(ll k=r;k<=d;k++) //printing downwards
	            cout<<a[k][d]<<" ";
	        d--;
	        for(ll k=l-1;k>=u;k--)    //printing leftwards
	            cout<<a[l][k]<<" ";
	        l--;
	        for(ll k=l;k>=r;k--)     //printing upwards
	            cout<<a[k][u]<<" ";
	        u++;
	    }
	    cout<<endl;
	}
	return 0;
}
