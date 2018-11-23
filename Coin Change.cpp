#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// ll count(ll m, ll n, ll S[])
// {
//     if(n<0 || m<=0)
//         return 0;
//     if(n==0)
//         return 1;    
//     return count(m-1,n,S)+count(m,n-S[m-1],S);
// }

ll count(ll m,ll n,ll S[])
{
    ll a[n+1];
    memset(a,0,sizeof a);
    a[0]=1;
    for(ll i=0;i<m;i++)
    {
        for(ll j=S[i];j<=n;j++)
        {
            a[j]=a[j]+a[j-S[i]];
        }
    }
    for(ll i=0;i<n+1;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return a[n];
}

int main()
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll m;   cin>>m;
	    ll S[m];
	    for(ll i=0;i<m;i++)
	        cin>>S[i];
	    ll n;   cin>>n;
	    ll ans=count(m,n,S);
	    cout<<ans<<endl;
	}
	return 0;
}
