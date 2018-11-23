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
    for(ll i=0;i<n-1;i++)
    {
    	if( (s[i]=='U' && s[i+1]=='R') || (s[i]=='R' && s[i+1]=='U') )
    		s.replace(i,2,"D");
    		
	}
	cout<<s.length()<<endl;
    return 0;
}

