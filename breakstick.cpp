#include <bits/stdc++.h>
using namespace std;
int main() {
// your code goes here
int a;
cin>>a;
while(a--)
{int nums,ans;
cin>>nums>>ans;
if(ans%2!=0)
cout<<"yes"<<endl;
else{
if((nums-ans)%2==0)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}}
return 0;
}
