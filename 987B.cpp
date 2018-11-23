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
    ll x,y;	cin>>x>>y;
    double xp=y* log10(x);
    double yp=x* log10(y);
    double z=xp-yp;
	if(z>0)
		cout<<">"<<endl;
	else if(z<0)
		cout<<"<"<<endl;
	else
		cout<<"="<<endl;
    return 0;
}

