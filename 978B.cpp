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
    string s;	cin>>s;
    ll cx=1,ans=0,f=0;
    for(ll i=0;i<n-1;i++)
    {
    	if(s[i]=='x' && s[i+1]=='x')
    	{
    		cx++;
		}
		else
		{
			f=1;
			if(cx>=3)
				ans+=cx-2;
			cx=1;
		}		
	}
	if(ans==0 && f==0)
	{
		cout<<cx-2<<endl;
	}
	else if(f==1)
	{
		if(cx>=3)
			ans+=cx-2;
		cout<<ans<<endl;
	}	
	else 
		cout<<0<<endl;
    return 0;
}

