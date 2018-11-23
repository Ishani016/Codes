#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define inf INT_MAX
#define mk make_pair
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;	cin>>n;
    if(n==0)
    	cout<<0<<endl;
    else if(n-1&1)
    	cout<<n+1<<endl;
    else
    	cout<<(n+1)/2<<endl;
    return 0;
}

