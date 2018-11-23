#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007

ll palindrome(string t)
{
	string ot=t;
	reverse(t.begin(),t.end());
	if(ot==t)
		return 1;
	return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;	cin>>s;
    set <string> vec;
    ll l=s.length();
    //find the substrings
    if(!palindrome(s))
		vec.insert(s);
    for(ll i=0;i<l;i++)
    {
    	for(ll j=0;j<l;j++)
    	{
    		string t=s.substr(i,j-i);
    		//check for palindrome 
			if(!palindrome(t))
				vec.insert(t);
		}
	}
    //find longest palindrome
    set<string>::iterator itr;
    ll len=0;
    for(itr=vec.begin();itr!=vec.end();itr++)
    {
    	string t=*itr;
    	if(t.length()>len)
    		len=t.length();
	}
	cout<<len<<endl;
    return 0;
}

