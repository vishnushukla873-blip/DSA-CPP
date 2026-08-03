#include<iostream>
using namespace std;
int main()
{
int correctPin = 1234, pin, attempts = 0;

while(attempts < 3) {
    cout << "Enter PIN: ";
    cin >> pin;
    
    if(pin == correctPin) {
        cout << "Login Success!";
        break;
    }
    else {
        attempts++;
        if(attempts == 3) {
            cout << "Account Blocked!";
        }
        else {
            cout << "Wrong PIN. " << 3-attempts << " attempts left";
        }
    }
}
return 0;
}