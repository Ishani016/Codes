#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mk make_pair
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    set<ll>s;
    for(ll i=0;i<n;i++)
	{
		ll x;	cin>>x;
		if(x!=0)
			s.insert(x);
	}		
	cout<<s.size()<<endl;
    return 0;
}

