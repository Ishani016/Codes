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
    string re;
    ll c=0,max=INT_MIN;
    for(ll i=0;i<n;i++)
    {
    	string t=s.substr(i,2);
    	c=1;
    	for(ll j=i+1;j<n-1;j++)
    	{
    		string z=s.substr(j,2);
    		if(z==t)
    			c++;
		}
		if(c>max)
		{
			max=c;
			c=0;
			re=t;
		}	
	}
	cout<<re<<endl;
    return 0;
}

