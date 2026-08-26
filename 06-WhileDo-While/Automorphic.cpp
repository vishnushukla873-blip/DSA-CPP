#include<iostream>
using namespace std;
int main()
{
    int n,sq,flag=1;
cin>>n;
sq=n*n;
while(n>0){
 if(n%10!=sq%10){ flag=0; break; }
 n/=10; sq/=10;
}
cout<<(flag?"Automorphic":"Not");
}