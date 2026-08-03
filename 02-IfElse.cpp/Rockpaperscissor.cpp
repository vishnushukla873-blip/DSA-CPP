#include<iostream>
using namespace std;
int main()
{
char user, comp;
cin >> user >> comp; // r, p, s

if(user == comp) {
    cout << "Draw";
}
else if((user=='r' && comp=='s') || (user=='s' && comp=='p') || (user=='p' && comp=='r')) {
    cout << "You Win!";
}
else if(user=='r'||user=='p'||user=='s') {
    cout << "Computer Wins!";
}
else {
    cout << "Invalid Input";
}

return 0;


}