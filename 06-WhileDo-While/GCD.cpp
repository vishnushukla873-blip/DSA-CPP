#include<iostream>
using namespace std ;
int main()
{
    int a,b,c,h=1,i=1;
cin>>a>>b>>c;
int small = (a<b)? (a<c?a:c) : (b<c?b:c);
while(i<=small){
 if(a%i==0 && b%i==0 && c%i==0) h=i;
 i++;
}
cout<<h;
}