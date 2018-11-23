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
    ll n;	cin>>n;
    vector<pair<ll,ll> >p;
    ll h[n+1];
    memset(h,0,sizeof(h));
    priority_queue <pair<ll,ll> > pq;
    for(ll i=1;i<=n;i++)
    {
    	ll x;	cin>>x;
    	p.pb(mk(x,i));
	}
	string s;	cin>>s;
	sort(p.begin(),p.end());
	ll intro=0;
	ll extro=n-1;
	for(ll i=0;i<s.length();i++)
	{
//		cout<<s<<endl;
//		cout<<s[i]<<" ";
		if(s[i]=='0')
		{
//			cout<<"UFUJ\n";
			for(ll j=intro;j<n;j++)
			{
				if(h[ p[j].second ] == 0)
				{
					cout<<p[j].second<<" ";
					h[ p[j].second ] =1;
					pq.push(mk(p[j].first,p[j].second));
					intro=j+1;
					j=n;
				}
			}
		}
		else
		{
			cout<<pq.top().second<<" ";
			pq.pop();
		}
	}
    return 0;
}

