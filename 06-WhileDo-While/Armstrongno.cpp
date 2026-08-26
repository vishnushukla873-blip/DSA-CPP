#include<iostream>
using namespace std ;
int main()
{
    int n,temp,sum=0,r;
cin>>n;
temp=n;
while(n>0){
 r=n%10;
 sum+=r*r*r;
 n/=10;
}
if(sum==temp) cout<<"Armstrong";
else cout<<"Not Armstrong";
}