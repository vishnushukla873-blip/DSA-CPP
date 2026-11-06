#include<iostream>
using namespace std;
//calculate N factorial
int factorialN(int n){
    int fact = 1;
for(int i=1; i<=n ; i++){
    fact = fact * n;  //fact*=n;
    
}

return fact;
}
int main()
{
   cout<<factorialN(5)<<endl;
   cout<<factorialN(6)<<endl;
   return 0;
}