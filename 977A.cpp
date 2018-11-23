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
    ll n,k;	cin>>n>>k;
    while(k--)
    {
    	if(n%10==0)
    		n/=10;
    	else
    		n--;
	}
	cout<<n<<endl;
    return 0;
}

