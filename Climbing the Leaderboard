#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
int main()
{
    ll n,m;
    vector<ll> scores, alice;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll x;   cin>>x;
        scores.pb(x);
    }
    cin>>m;
    for(ll i=0;i<m;i++)
    {
        ll y;   cin>>y;
        alice.pb(y);
    }
    sort(scores.begin(), scores.end());
    vector<ll> unique_score;
    for(ll i=0;i<n;i++)
    {
        if(!binary_search(unique_score.begin(),unique_score.end(),scores[i]))
            unique_score.pb(scores[i]);
    }
    for(ll i=0;i<m;i++)
    {
        vector<ll>:: iterator up;
        up = upper_bound(unique_score.begin(), unique_score.end(), alice[i]);
        ll ans = unique_score.size() - (up-unique_score.begin()) + 1;
        cout<<ans<<endl;
    }
    
}
