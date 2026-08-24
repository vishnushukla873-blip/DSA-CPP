#include<iostream>
using namespace std;
int main()
{
    int row , col ;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    // Upper part
    for(row=1; row<=n; row++)
    {
        // left stars
        for(col=1; col<=row; col++)
            cout<<"*";
            
        // spaces
        for(col=1; col<=2*(n-row); col++)
            cout<<" ";
            
        // right stars
        for(col=1; col<=row; col++)
            cout<<"*";
            
        cout<<endl;
    }
    
    // Lower part
    for(row=n; row>=1; row--)
    {
        // left stars
        for(col=1; col<=row; col++)
            cout<<"*";
            
        // spaces
        for(col=1; col<=2*(n-row); col++)
            cout<<" ";
            
        // right stars
        for(col=1; col<=row; col++)
            cout<<"*";
            
        cout<<endl;
    }
    return 0;
}