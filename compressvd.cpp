#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int z;
	cin>>z;
	while(z--)
	{
	    int a,b=0;
	    cin>>a;
	    int x[a];
	    for(int j=0;j<a;j++)
	    {
	        cin>>x[j];
	        if(x[j]==x[j-1])
	        b++;
	    }
	    cout<<a-b<<endl;
	}
	return 0;
}
