#include<iostream>
using namespace std ;
int main(){
    int a=10, b=20;
    cout<<(a>5 && b<30)<<endl; // 1 (true && true)
    cout<<(a>15 || b>15)<<endl; // 1 (false || true)
    cout<<!(a==10)<<endl; // 0
    cout<<(a + b * 2 / 10)<<endl; // 14 -> 20*2=40/10=4+10=14
}