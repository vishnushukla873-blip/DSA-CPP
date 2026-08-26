#include<iostream>
using namespace std ;
int main()
{
    int n, sq, sum=0, d=0, temp;
cin>>n;
sq=n*n; temp=n;
while(temp>0){ d++; temp/=10; }
temp=1; while(d--){ temp*=10; }
sum = sq/temp + sq%temp;
cout<<(sum==n?"Kaprekar":"Not");
}
