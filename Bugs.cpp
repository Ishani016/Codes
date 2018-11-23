#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    ll n;   cin>>n;
    vector<ll>v;
    while(n--)
    {
        ll f=0;
        ll x;   cin>>x;
        if(x==1)
        {
            ll y;   cin>>y;
            // if(v.empty())
            //     v.pb(y);
            // else 
            // {
                ll i=upper_bound(v.begin(),v.end(),y)-v.begin();
                v.insert(v.begin()+i,y);
                f=1;
            // }
            if(f==0)
                v.pb(y);
        }
        else
        {
            if(v.size()<3)
                cout<<"Not enough enemies\n";
            else
                cout<<v[v.size()-v.size()/3]<<endl;
            
        }
    }
    // for(ll i=0;i<v.size();i++)
    //     cout<<v[i]<<" ";
    return 0;
}
