#include<iostream>
using namespace std ;
int main()
{
    int row , col ;
    for(row=1 ; row<= 6 ; row++)
    {
        char name = 'a'+col-1;
        for(col = 1 ; col<=8 ; col++)
        {
            cout<<name<<" ";
        }
        return 0 ;
    }
}