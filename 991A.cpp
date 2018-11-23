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
    ll a,b,c,n;	cin>>a>>b>>c>>n;
    ll res=n-(a+b-c);
    if(res<=0 || c>a || c>b)
    	cout<<-1<<endl;
    else
    	cout<<res<<endl;
    return 0;
}

