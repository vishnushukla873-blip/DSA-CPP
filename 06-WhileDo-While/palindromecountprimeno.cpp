#include<iostream>
using namespace std ;
int main()
{
    int l,r,p=0,c=0,pal=0;
cin>>l>>r;
int num=l;
while(num<=r){
 // prime check
 int i=2; bool prime=true;
 if(num<=1) prime=false;
 while(i*i<=num){ if(num%i==0){prime=false;break;} i++; }
 if(prime) p++; else if(num>1) c++;
 
 // palindrome check
 int rev=0, t=num;
 while(t>0){ rev=rev*10+t%10; t/=10; }
 if(rev==num) pal++;
 num++;
}
cout<<p<<" "<<c<<" "<<pal;
}