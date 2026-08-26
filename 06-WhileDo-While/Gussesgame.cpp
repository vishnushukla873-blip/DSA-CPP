#include<iostream>
using namespace std ;
int main()
{
    int secret=45, guess, ch=1;
do{
 cout<<"Chance "<<ch<<": ";
 cin>>guess;
 if(guess==secret){ cout<<"Won!"; break; }
 else if(guess<secret) cout<<"Bigger\n";
 else cout<<"Smaller\n";
 ch++;
}while(ch<=3);
if(ch>3) cout<<"Game Over";

}