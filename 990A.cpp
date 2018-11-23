#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mk make_pair
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,m,a,b;	cin>>n>>m>>a>>b;
    if(n%m==0)
    	cout<<0<<endl;
    else
    {
    	ll aa,ab;
    	if(n>m)
    	{
    		ll d=n/m;
    		ll n1=(d+1)*m;
    		aa=a*(n1-n);
    		ab=b*(n%m);
		}
		else
		{
			aa=a*(m-n);
    	    ab=b*n;
		}	
    	
    	if(aa<ab)	
    		cout<<aa<<endl;
    	else
    		cout<<ab<<endl;
	}
    return 0;
}

