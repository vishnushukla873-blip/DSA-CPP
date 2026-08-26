#include<iostream>
using namespace std ;
int main()
{
    int a,b,x,y;
cin>>a>>b;
x=a; y=b;
while(b!=0){
 int temp=b;
 b=a%b;
 a=temp;
}
int hcf=a;
int lcm=(x*y)/hcf;
cout<<"HCF:"<<hcf<<" LCM:"<<lcm;
}