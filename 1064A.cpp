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
    ll a,b,c;	cin>>a>>b>>c;
    ll ans=0;
    if(a+b<=c)
    	ans+=c+1-a-b;
	else if(b+c<=a)
		ans+=a+1-b-c;
	else if(c+a<=b)
		ans+=b+1-a-c;
	cout<<ans<<endl;
    return 0;
}

