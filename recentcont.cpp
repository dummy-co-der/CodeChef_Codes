#include <bits/stdc++.h>>
using namespace std;

int main() 
{
    int x;
    cin>>x;
    while(x--)
    {
        int z,a=0,b=0;
        cin>>z;
        string s;
        for(int i=0; i<z; i++)
        {
            cin>>s;
            if(s=="START38")
            a++;
            else
            b++;
        }
        cout<<a<<" "<<b<<endl;
    }
	return 0;
}
