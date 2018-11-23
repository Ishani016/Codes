#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    map < string,string> b;
	b["purple"]="Power";
	b["green"]="Time";
	b["blue"]="Space";
	b["orange"]="Soul";
	b["red"]="Reality";
	b["yellow"]="Mind";   
    map <string,ll> h;
	h["purple"]=0;
	h["green"]=0;
	h["blue"]=0;
	h["orange"]=0;
	h["red"]=0;
	h["yellow"]=0;
    while(n--)
    {
    	string s;	cin>>s;
    	h[s]=1;
	}
    ll c=0;
	map<string,ll>::iterator itr;
	for(itr=h.begin();itr!=h.end();itr++)
	{
		if(itr->second==0)
		{
            c++;
        }
    }
    cout<<c<<endl;
    for(itr=h.begin();itr!=h.end();itr++)
	{
		if(itr->second==0)
		{  
			string x=itr->first;
			cout<<b[x]<<endl;
		}
	}
    return 0;
}

