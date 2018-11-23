#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void swap(ll *a,ll *b)
{
    ll t=*a;
    *a=*b;
    *b=t;
}

void sort012(ll a[],ll n)
{
    ll low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(a[mid]==0)
        {
            swap(&a[low],&a[mid]);
            low++;
            mid++;
        }
        else if(a[mid]==1)
            mid++;
        else
        {
            swap(&a[high],&a[mid]);
            high--;
        }
    }
}

int main() 
{
	ll t;   cin>>t;
	while(t--)
	{
	    ll n;   cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort012(a,n);
	    for(ll i=0;i<n;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
