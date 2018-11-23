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
    ld n,m,k,l;	cin>>n>>m>>k>>l;
    ll t=ceil((l+k)/m);
    if(t*m>n)
    	cout<<-1<<endl;
    else 
    	cout<<t<<endl;
    return 0;
}

