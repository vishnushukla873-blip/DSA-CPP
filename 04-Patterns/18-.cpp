#include<iostream>
using namespace std ;
int main()
{
    int row , col ;
    for(row=1;row<=4;row++)
    {
      for(col=1;col<=4-row;col=col+1)
      {
        cout<<" ";
      }
      for(col=1;col<=row;col++)
      {
        cout<<row<<" ";
      }
      cout<<endl;
    }
    return 0 ;
}