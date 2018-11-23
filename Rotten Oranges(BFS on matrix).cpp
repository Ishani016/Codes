#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define mk make_pair
int main() {
	ll t;   cin>>t;
	while(t--)
	{
	    ll r,c; cin>>r>>c;
	    ll a[r][c];
	    bool vis[r][c];
	    memset(vis,false,sizeof vis);
	    queue<pair<pair<ll,ll> ,ll> >q;
	    ll mi=INT_MAX;
	    
	    for(ll i=0;i<r;i++)
	        for(ll j=0;j<c;j++)
	        {
	            cin>>a[i][j];
	            if(a[i][j]==2)
	            {
	                vis[i][j]=true;
	                q.push(mk( mk(i,j),0) );
	            }
	        }
	    
	    while(!q.empty())
	    {
	        pair< pair<ll,ll>,ll >p=q.front();
	        q.pop();
	        ll f=p.first.first;
	        ll s=p.first.second;
	        ll t=p.second;
	        vis[f][s]=true;
	        //up will rot
	        if(f-1!=-1)
	        {
	            if(vis[f-1][s]==false and a[f-1][s]==1)
	                q.push(mk( mk(f-1,s),t+1) );
	        }
	        //down will rot
	        if(f+1!=r)
	        {
	            if(vis[f+1][s]==false and a[f+1][s]==1)
	                q.push(mk( mk(f+1,s),t+1) );
	        }
	        //right will rot
	        if(s+1!=c)
	        {
	            if(vis[f][s+1]==false and a[f][s+1]==1)
	                q.push(mk( mk(f,s+1),t+1) );
	        }
	        //left will rot
	        if(s-1!=-1)
	        {
	            if(vis[f][s-1]==false and a[f][s-1]==1)
	                q.push(mk( mk(f,s-1),t+1) );
	        }
	        ll i,j,fl=1;
	        for(i=0;i<r;i++)
	        {
	            for(j=0;j<c;j++)
	            {
	                if(a[i][j]==1 and vis[i][j]==false)
	                {
	                    fl=0;
	                    break;
	                }
	            }
	            if(fl==0)
	                break;
	        }
	       if(fl==1 and t<mi)
	           mi=t;
	    }
	   //for(ll i=0;i<r;i++)
	   //     {
	   //         for(ll j=0;j<c;j++)
	   //         {
	   //             if(a[i][j]==0)
	   //                 cout<<"Z"<<" ";
	   //             else
	   //                 cout<<vis[i][j]<<" ";
	   //         }
	       //     cout<<endl;
	       // }
	                
        if(mi==INT_MAX)
            cout<<-1<<endl;
        else
            cout<< mi <<endl;
	}
	return 0;
}
