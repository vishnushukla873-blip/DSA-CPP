#include<iostream>
using namespace std ;
int main()
{
    char ch;
do{
 int a,b;
 char op;
 cout<<"Enter: 5+3 : ";
 cin>>a>>op>>b;
 if(op=='+') cout<<a+b<<endl;
 if(op=='-') cout<<a-b<<endl;
 if(op=='*') cout<<a*b<<endl;
 if(op=='/') cout<<a/b<<endl;
 cout<<"Continue? y/n: ";
 cin>>ch;
}while(ch=='y' || ch=='Y');
}