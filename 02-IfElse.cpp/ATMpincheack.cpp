#include<iostream>
using namespace std;
int main()
{
int pin, amount, balance = 10000, correctPin = 1234;

cout << "Enter PIN: ";
cin >> pin;

if(pin == correctPin) {
    cout << "Enter amount: ";
    cin >> amount;
    
    if(amount > balance) {
        cout << "Insufficient Balance";
    }
    else if(amount % 100 != 0) {
        cout << "Enter multiple of 100";
    }
    else {
        balance = balance - amount;
        cout << "Success! Remaining: " << balance;
    }
}
else {
    cout << "Wrong PIN";
}

return 0;
}