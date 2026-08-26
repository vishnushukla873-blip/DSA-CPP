#include<iostream>
using namespace std ;
int main()
{
    int n,temp,sum=0;
cin>>n; temp=n;
while(temp>0){ sum+=temp%10; temp/=10; }
int rev=0,t=sum;
while(t>0){ rev=rev*10+t%10; t/=10; }
cout<<(sum*rev==n?"Magic":"Not Magic");
}