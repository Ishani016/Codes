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
    ll n;	cin>>n;
    ll h[1001];
    memset(h,0,sizeof(h));
    set<ll>s;
    for(ll i=0;i<n;i++)
    {
    	ll x;	cin>>x;
    	h[x]++;
    	s.in(x);
	}
	cout<<*max_element(h,h+1001)<<" "<<s.size()<<endl;
    return 0;
}

