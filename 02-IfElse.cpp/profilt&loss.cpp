#include<iostream>
using namespace std;
int main()
{
    double cp, sp, profit, loss, per;
cin >> cp >> sp;

if(sp > cp) {
    profit = sp - cp;
    per = (profit/cp)*100;
    cout << "Profit: " << profit << " Percentage: " << per << "%";
}
else if(cp > sp) {
    loss = cp - sp;
    per = (loss/cp)*100;
    cout << "Loss: " << loss << " Percentage: " << per << "%";
}
else {
    cout << "No Profit No Loss";
}
return  0;
}