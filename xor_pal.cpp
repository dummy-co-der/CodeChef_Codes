#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int z;
    cin>>z;
    while(z--) 
    {
        int m;
        string g;
        cin>>m>>g;
        int answer=0;
        for( int i=0; i<m/2; i++ )
        {
            if(g[i]!=g[m-i-1])
            answer++;
        }
        cout<<(answer+1)/2<<endl;
    }
    return 0;
}