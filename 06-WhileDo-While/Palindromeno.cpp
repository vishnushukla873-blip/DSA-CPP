#include<iostream>
using namespace std ;
int main()
{
    int n,temp,rev=0,i=2; bool prime=true;
cin>>n; temp=n;
while(temp>0){ rev=rev*10+temp%10; temp/=10; }

temp=n;
while(i*i<=n){
 if(n%i==0){ prime=false; break; }
 i++;
}
if(prime && n==rev) cout<<"Palindrome Prime";
}