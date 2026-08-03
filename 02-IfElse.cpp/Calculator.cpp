#include<iostream>
using namespace std;
int main()
{
char op; int a,b;
cin >> a >> op >> b;

if(op == '+') cout << a+b;
else if(op == '-') cout << a-b;
else if(op == '*' || op == 'x') cout << a*b;  // || means OR
else if(op == '/' && b != 0) cout << a/b;     // && means AND
else cout << "Invalid";
}