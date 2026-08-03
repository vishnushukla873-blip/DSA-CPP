#include<iostream>
using namespace std;
int main()
{ 
int units; double bill = 0;
cin >> units;

if(units <= 50) {
    bill = units * 3;
}
else if(units <= 150) {
    bill = 50*3 + (units-50)*4.5;  // pehle 50 units 3 rs, baaki 4.5 rs
}
else if(units <= 250) {
    bill = 50*3 + 100*4.5 + (units-150)*6;
}
else {
    bill = 50*3 + 100*4.5 + 100*6 + (units-250)*8;
}

if(bill > 500) bill = bill + bill*0.1; // 10% extra charge

cout << "Bill: " << bill;
return 0;
}