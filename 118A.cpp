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
    string s;	cin>>s;
    ll l=s.length();
    for(ll i=0;i<l;i++)
    {
    	if(s[i]-'A'>=0 and s[i]-'A'<26)
    		s[i]=(char)(s[i]+32);
	}
	string t="";
	for(ll i=0;i<l;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i'||s[i]=='o' || s[i]=='u' || s[i]=='y')
			continue;
		else
			t+=s[i];
	
	}
	for(ll i=0;i<t.length();i++)
	    cout<<"."<<t[i];
    return 0;
}

