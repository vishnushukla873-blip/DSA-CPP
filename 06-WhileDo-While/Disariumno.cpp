#include<iostream>
using namespace std ;
int main()
{
    int n,len=0,sum=0;
cin>>n;
int temp=n;
while(temp>0){ len++; temp/=10; }
temp=n;
while(temp>0){
 int r=temp%10, p=1, i=1;
 int pow=len;
 while(i<=pow){ p*=r; i++; }
 sum+=p;
 len--;
 temp/=10;
}
cout<<(sum==n?"Disarium":"Not");
}