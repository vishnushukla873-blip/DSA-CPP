#include<iostream>
using namespace std ;
int main()
{
    int row , col ;
    for(row=1;row<=7;row++)
    {
        for(col=row;col<=9;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}