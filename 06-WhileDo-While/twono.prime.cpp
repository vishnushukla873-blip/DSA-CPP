#include<iostream>
using namespace std ;
int main()
{
    int a,b;
cin>>a>>b;
int x=a,y=b;
while(y!=0){ int t=y; y=x%y; x=t; }
cout<<(x==1?"Co-Prime":"Not");
}