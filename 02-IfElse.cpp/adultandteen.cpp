#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age :";
    cin>>age;
    if(age>=20 && age<=100)
    {
        cout<<"Adult";
    }
    else if(age>=13 && age<20)
    {
        cout<<"Teenager";
    }
    else if(age>=0 && age<13)
    {
        cout<<"Child";
    }
    else
    {
        cout<<"Invalid age";
    }
    return 0;
}