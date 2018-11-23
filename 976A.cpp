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
    string s;	cin>>s;
    ll c=0,f=0;
    for(ll i=0;i<s.length();i++)
    {
    	if(s[i]=='0')
    		c++;
    	if(s[i]=='1')
    		f=1;
	}
	if(f==1)
		cout<<1;
	for(ll i=1;i<=c;i++)
		cout<<0;
    return 0;
}

