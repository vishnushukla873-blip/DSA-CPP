#include<iostream>
using namespace std ;
int main()
{
    int bal=5000, ch, amt;
do{
 cout<<"\n1.Deposit 2.Withdraw 3.Check 4.Exit\n";
 cin>>ch;
 if(ch==1){ cin>>amt; bal+=amt; }
 if(ch==2){ cin>>amt; if(amt<=bal) bal-=amt; else cout<<"Low Balance"; }
 if(ch==3) cout<<bal;
}while(ch!=4);
}