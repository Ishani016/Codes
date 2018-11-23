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
    string s;	cin>>s;
    ll l=s.length();
    ll h[]={0,0,0};
    ll fa=0,fb=0,fc=0;
    if(s[0]!='a')
    {
    	cout<<"NO\n";
    	return 0;
	}
    for(ll i=0;i<l;i++)
    {
    	if(s[i]=='a')
    		h[0]++;
    	else if(s[i]=='b')
    		h[1]++;
    	else
    		h[2]++;
	}
	for(ll i=0;i<l;i++)
    {
    	if(s[i]=='a')
    	{
    		if(fb==1 || fc==1)
    		{
    			cout<<"NO\n";
    			return 0;
			}
    		fa=1;
		}	
    	if(s[i]=='b')
    	{
    		if(fc==1)
    		{
    			cout<<"NO\n";
    			return 0;
			}
    		fb=1;
		}
		if(s[i]=='c')
		{
			fc=1;
		}
	}
	if(h[1]==0 || h[2]==0)
		cout<<"NO\n";
	else if(h[2]==h[1] || h[2]==h[0])
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
    return 0;
}

