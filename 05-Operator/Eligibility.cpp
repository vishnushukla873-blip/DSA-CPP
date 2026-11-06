#include<iostream>
using namespace std ;
int main(){
    int age, marks;
    cin>>age>>marks;
    if(age>=18 && marks>=60)
        cout<<"Eligible";
    else
        cout<<"Not Eligible";
}