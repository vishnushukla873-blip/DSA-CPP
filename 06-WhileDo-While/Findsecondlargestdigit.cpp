#include<iostream>
using namespace std ;
int main()
{
    int n, max1=-1, max2=-1;
cin>>n;
while(n>0){
 int d=n%10;
 if(d>max1){ max2=max1; max1=d; }
 else if(d>max2 && d!=max1) max2=d;
 n/=10;
}
cout<<max2;
}