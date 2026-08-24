#include<iostream>
using namespace std ;
int main()
{
    int row , col ;
    int n ;
    cout<<"Enter the number :"<<" ";
    cin>>n;
    for(row=n;row<=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*n-2*row;col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;row++)
        {
            cout<<"$";
        }
        for(row=1;row<=5;row++)
        {
            for(row=n;row>=1;row--)
            {
                for(col=1;col<=n-row;col=col-1)
                {
                    cout<<" ";
                }
                for(col=1;col<=2*row-1;col++)
                {
                    cout<<"$";
                }
                cout<<endl;
            }
            return 0 ;
        }
    }
}