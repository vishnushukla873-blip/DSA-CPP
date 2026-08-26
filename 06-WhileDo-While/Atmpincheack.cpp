#include<iostream>
using namespace std ;
int main()
{
    int pin , amount , balance = 10000 ,correctpin=8871 ;
    cout<< "Enter the pin :";
    cin>>pin ;
    int pin ;
    while(pin == correctpin)
    {
        cout<<"Enter the amount :";
        break;
    }
    while( amount > balance )
    {
        cout<<"Insufficient Balance";
        break;
    }
    while( amount % 100 != 0)
    {
        cout<<"Enter multiple of 100";
        break;
    }
    while( balance = balance - amount )
    {
       cout<<"Success! Remained Amount: "<< balance ;
    }
    cout<<endl;
    return 0 ;

}