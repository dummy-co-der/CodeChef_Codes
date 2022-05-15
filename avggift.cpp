#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        sort(a,a+n);
        if(find(a,a+n,x)!=a+n)
        {
            cout<<"YES"<<endl;
            
        }
        else
        {
            ll mnt = a[0];
            ll mxt = a[n-1];
            if(mnt<x&&mxt>x)
            {
                cout<<"YES"<<endl;
                
            }
            else cout<<"NO"<<endl;
            
        }
   }
return 0;
}