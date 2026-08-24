#include<iostream>
using namespace std ;
int main()
{
    char row , col ;
    char a ='A';
    char h ='H';
    for(row=a;row<=h;row++)
    {
        for(col=row;col<=h;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}