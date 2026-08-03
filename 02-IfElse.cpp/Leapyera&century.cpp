#include<iostream>
using namespace std;
int main()
{
int year;
cin >> year;

if(year % 400 == 0) {           // 2000, 1600
    cout << "Leap Year - Century";
}
else if(year % 100 == 0) {      // 1900, 2100
    cout << "Not Leap Year - Century";
}
else if(year % 4 == 0) {        // 2024, 2028
    cout << "Leap Year";
}
else {
    cout << "Not Leap Year";
}
return 0;
}