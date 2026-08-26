#include<iostream>
using namespace std ;
int main()
{
    int i=1;
while(i<=1000){
 int n=i, sum=0, temp=n;
 while(temp>0){
  int r=temp%10;
  sum+=r*r*r;
  temp/=10;
 }
 if(sum==i) cout<<i<<" ";
 i++;
}
}