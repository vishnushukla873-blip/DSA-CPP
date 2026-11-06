#include<iostream>
using namespace std ;
int main()
{
    int correctpin , pin , attempts = 0 ;
    while( attempts < 3 )
    {
        cout<<"Enter the pin :";
        cin>>pin;
    }
    while(pin == correctpin )
    {
        cout<<"Login succecssfully";
        break;
    }
    while( attempts>3 )
    {
        cout<<"wrong account bolcked";
        

    }
}