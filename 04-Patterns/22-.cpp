#include<iostream>
using namespace std;
int main()
{
    int row , col ;
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            // sirf border pe * print karo
            if(row==1 || row==n || col==1 || col==n)
                cout<<"*";
            else
                cout<<" "; // andar space
        }
        cout<<endl;
    }
    return 0;
}