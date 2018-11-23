#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
#define in insert

bool check(ll n)
{
	set<ll>s;
	while(n)
	{
		s.in(n%10);
		n/=10;
	}
	if(s.size()==4)
		return true;
	return false;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    while(n++)
    {
    	if(check(n))
    	{
    		cout<<n<<endl;
    		break;
		}
	}
    return 0;
}

