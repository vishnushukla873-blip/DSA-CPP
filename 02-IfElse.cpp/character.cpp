#include<iostream>
using namespace std;
int main()
{
char ch;
cin >> ch;

if(ch >= 'A' && ch <= 'Z') {
    cout << "Capital Letter";
}
else if(ch >= 'a' && ch <= 'z') {
    cout << "Small Letter";
}
else if(ch >= '0' && ch <= '9') {
    cout << "Digit";
}
else {
    cout << "Special Character";
}
return 0;

}