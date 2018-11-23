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
    ll a,b,x;	cin>>a>>b>>x;
    string s;
    ll f0=0;
    ll f1=0;
    if(a>b)
    {
		s="0";
		a--;
		f0=1;
	}
	else
	{
		s="1";
    	b--;
    	f1=1;
	}
    
    for(ll i=1;i<x;i++)
    {
    	if(f1==1)
    	{
    		s+="0";
    		a--;
    		f1=0;
    		f0=1;
		}	
    	else
    	{
    		s+="1";
    		b--;
    		f0=0;
    		f1=1;
		}
	}
	
	if(f1==1)
	{
		while(b--)
			s+="1";
		while(a--)
			s+="0";
	}
	else
	{
		while(a--)
			s+="0";
		while(b--)
			s+="1";
	}
		
	cout<<s;
    return 0;
}

