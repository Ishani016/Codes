#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mk make_pair
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n,k;	cin>>n>>k;
    map <ll,ll> b;
    for(ll i=0;i<n;i++)
    {
    	ll x;	cin>>x;
    	b[x]=i+1;
	}
	if(b.size()>=k)
	{
		cout<<"YES\n";
		map<ll,ll>::iterator itr;
		ll i=1;
		for(itr=b.begin();itr!=b.end();itr++)
		{
			if(i==k+1)
				break;
			cout<<itr->second<<" ";
			i++;
			
		}	
		cout<<endl;
	}
	else
		cout<<"NO\n";
    return 0;
}

