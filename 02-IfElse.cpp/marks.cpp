#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter the marks:";
    cin>>marks;
    if(marks<=33)
    {
        cout<<"pass";
    }
    else if(marks<=90)
    {
        cout<<"Excellent";
    }
    else if(marks<=95)
    {
        cout<<"outstanding";
    }
    else if(marks<=80 && marks>=90)
    {
        cout<<"very good";
    }
    else if(marks<=70 && marks>80)
    {
        cout<<"good";
    }
    else if(marks<=60 && marks>70)
    {
        cout<<"average";
    }
    else if(marks<=50 && marks>60)
    {
        cout<<"below average";
    }
    else if(marks<33)
    {
        cout<<"fail";
    }
    else
    {
        cout<<"invalid marks";
    }
   return 0;
}