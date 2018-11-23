#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert

void unionst(ll p[], ll x, ll y)
{
	ll root_x=p[x];
	ll root_y=p[y];
    for(ll i=0;i<26;i++)
    {
        if(p[i]==root_y)
            p[i]=root_x;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    string s,t;		cin>>s>>t;
    ll p[26];
    for(ll i=0;i<26;i++)
    	p[i]=i;
    set < pair<char,char> > at;
    for(ll i=0;i<n;i++)
    {
    	if( s[i] != t[i] && p[ s[i]-'a' ] != p[ t[i]-'a' ] )
    	{
    		at.in(mk(s[i],t[i]));
    		unionst(p,s[i]-'a',t[i]-'a');
		}
	}
	set < pair<char,char> >::iterator it;
	cout<<at.size()<<endl;
	for(it=at.begin();it!=at.end();it++)
	{
        pair <char,char> d=*it;
		cout<<d.first<<" "<< d.second <<endl;
	}
    return 0;
}

