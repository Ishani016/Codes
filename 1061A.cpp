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
    ll n,s;	cin>>n>>s;
    ll ans;
    if(s%n==0)
    	ans=s/n;
    else
    	ans=s/n+1;
    cout<<ans<<endl;
    return 0;
}

