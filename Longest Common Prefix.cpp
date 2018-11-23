#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    vector<string> a;
	    ll ml=INT_MAX;
	    for(ll i=0;i<n;i++)
	    {
	        string x;   cin>>x;
	        a.pb(x);
	    }
	    sort(a.begin(),a.end());
	    string t="";
	    ll i;
	    for(i=0;i<a[0].length();i++)
	    {
	        if(a[0][i]==a[n-1][i])
	            t+=a[0][i];
	        else
	            break;
	    }
	    if(t=="")
	        cout<<-1<<endl;
	    else
	        cout<<t<<endl;
	   }
	return 0;
}
