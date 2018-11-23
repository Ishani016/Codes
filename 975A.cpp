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
    set <string> s1;
    ll n;	cin>>n;
    for(ll i=0;i<n;i++)
    {
    	set <char> s2;
    	string str;	cin>>str;
    	for(ll j=0;j<str.length();j++)
    	{
    		s2.in(str[j]);
		}
		string t="";
		set <char> :: iterator itr;
		for(itr=s2.begin();itr!=s2.end();itr++)
		{
			char ch=*itr;
			t+=ch;
		}
		s1.in(t);
	}
	cout<<s1.size()<<endl;
    return 0;
}

