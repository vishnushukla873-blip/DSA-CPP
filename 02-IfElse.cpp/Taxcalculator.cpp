#include<iostream>
using namespace std;
int main()
{
double income, tax = 0;
cin >> income;

if(income <= 250000) {
    tax = 0;
}
else if(income <= 500000) {
    tax = (income - 250000) * 0.05;
}
else if(income <= 1000000) {
    tax = 12500 + (income - 500000) * 0.2;
}
else {
    tax = 112500 + (income - 1000000) * 0.3;
}

if(tax > 0) tax = tax + tax*0.04; // 4% cess
cout << "Tax: " << tax;
return 0;
}