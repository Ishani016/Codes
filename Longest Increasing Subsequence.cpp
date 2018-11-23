#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;   cin>>t;
    while(t--)
    {
        ll n;   cin>>n;
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        ll a[n];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        ll lis[n];
        for(ll i=0;i<n;i++)
            lis[i]=1;
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<i;j++)
            {
                if(a[j]<a[i] and lis[i]<lis[j]+1)
                    lis[i]=lis[j]+1;;
            }
        }
        // for(ll i=0;i<n;i++)
        //     cout<<lis[i]<<" ";
        cout<<*max_element(lis,lis+n)<<endl;
    }
    return 0;
}

