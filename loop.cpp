#include<iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	while(a--)
	{
	    int b,c,z;
	    cin>>b>>c>>z;
	    if(b>c)
	    {
	        cout<<min(b-c,z-b+c);
	    }
	    else
	    {
	        cout<<min(c-b,z+b-c);
	    }
	    cout<<endl;
	}
	return 0;
}
