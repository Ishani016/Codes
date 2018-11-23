#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() 
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll m,n; cin>>m>>n;
	    string s,t; cin>>s>>t;
	    ll a[m+1][n+1];
	    memset(a,0,sizeof a);
	    for(ll i=1;i<=m;i++)
	    {
	        for(ll j=1;j<=n;j++)
	        {
	            if(s[i-1]==t[j-1])
	            {
	               // cout<<s[i-1]<<endl;
	                a[i][j]=a[i-1][j-1]+1;
	            }
	            else
	                a[i][j]=max(a[i-1][j],a[i][j-1]);
	        }
	    }
	    cout<<a[m][n]<<endl;
	}
	return 0;
}
