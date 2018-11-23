#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    string a[n];
	    for(ll i=0;i<n;i++)
	    {
	        ll x;   cin>>x;
	        a[i]=to_string(x);
	    }
	    sort(a,a+n);
	    for(ll i=0;i<n-1;i++)
	    {
	        ll x=stoi(a[i]);
	        ll y=stoi(a[i+1]);
	        if(y%10==0 and a[i][0]==a[i+1][0])
	        {
	            string temp=a[i+1];
	            a[i+1]=a[i];
	            a[i]=temp;
	        }
	    }
	    for(ll i=n-1;i>=0;i--)
	        cout<<a[i];
	    cout<<endl;
	}
	return 0;
}
