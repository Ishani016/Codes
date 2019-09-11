#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;   cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll o=0,e=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]&1)
            o++;
        else 
            e++;
    }
    ll point;
    if(o>e)
    {
        for(ll i=0;i<n;i++)
        {
            if(a[i]&1)
            {
                point = a[i];
                break;
            } 
        }
    }
    else 
    {
        for(ll i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                point = a[i];
                break;
            } 
        }
    }
    ll cost=0;
    for(ll i=0;i<n;i++)
    {
        ll diff = abs(a[i]-point);
        if(diff&1)
            cost++; 
    }
    cout<<cost;
    return 0;
}
