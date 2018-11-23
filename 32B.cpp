#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert

string s;
ll check(ll n,ll i)
{
	if(s[i]=='.')
		return 0;
	if(s[i]=='-' and s[i+1]=='.')
		return 1;
	return 2;	
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    cin>>s;
    string t="";
    ll l=s.length();
    bool vis[l];
    memset(vis,false,sizeof vis);
    for(ll i=0;i<l;i++)
    {
    	if(check(0,i)==0 and vis[i]==false)
    		t+='0';
    	else if(check(1,i)==1 and vis[i]==false) 
    	{
			t+='1';
			vis[i+1]=true;
		}
    	else if(check(2,i)==2 and vis[i]==false)
    	{
			t+='2';
			vis[i+1]=true;
		}
		vis[i]=true;
	}
	cout<<t<<endl;
    return 0;
}

