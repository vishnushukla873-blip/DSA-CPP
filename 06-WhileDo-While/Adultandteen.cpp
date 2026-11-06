#include<iostream>
using namespace std ;
int main()
{
    int age ;
    cout<<"Enter the age :";
    cin>>age ;
    int age;
    while(age>=20 && age<100)
    {
        cout<<"Adult's";
        break;
    }
    while(age>=13 && age>=20)
    {
       cout<<"Teenage" ;  
       break ;
    }
    while(age>13)
    {
        cout<<"child";
        break ;
    }
    if(age>100)
    {
        cout<<"Not Exist";
    }
    
}