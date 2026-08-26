#include<iostream>
using namespace std ;
int main()
{
    int n,i=2,ans;
cin>>n;
while(i*i<=n){
 while(n%i==0){ ans=i; n/=i; }
 i++;
}
if(n>1) ans=n;
cout<<ans;
}