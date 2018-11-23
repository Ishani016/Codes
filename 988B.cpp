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
    ll f=1;
    vector< pair <ll,string> > p;
	for(ll i=0;i<n;i++)
	{
		string x;	cin>>x;
		p.pb(mk(x.length(),x));
	} 
	sort(p.begin(),p.end());
	for(ll i=0;i<n-1;i++)
	{
		string x=p[i].second;
		if(p[i+1].second.find(x)!=string::npos)
			continue;
		else
		{
			f=0;
			break;
		}
	}
	if(f==1)
	{
		cout<<"YES\n";
		for(ll i=0;i<n;i++)
		{
			cout<<p[i].second<<endl;
		}
	}
	else
		cout<<"NO\n";
    return 0;
}

