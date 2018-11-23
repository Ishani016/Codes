#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; 

ll h[11];

ll f(ll n)
{
    if(n==1 || n==0)
        return n;
    ll p=1+n*(n-1)/2;
    ll pr=1;
    for(ll i=p;i<p+n;i++)
        pr=pr*i;
    return h[n]=pr+f(n-1);
}

int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    cout<<f(n)<<endl;
	}
	return 0;
}


