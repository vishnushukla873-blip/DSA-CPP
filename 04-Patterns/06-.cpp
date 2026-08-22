#include<iostream>
using namespace std;
int main()
{
    int row , col ;
    for( row = 1 ; row<=8 ; row++)
    {
        char name = 'a'+row-1;
        for( col = 1 ; col<=8 ; col++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}