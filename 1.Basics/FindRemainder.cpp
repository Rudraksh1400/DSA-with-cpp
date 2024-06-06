#include<iostream>
using namespace std;
int main()
{
    int a = 57567; //a = Dividend
    int b = 987;  //b = Divisor
    //int q;      //q = Quotient
    //int r;      //r = Remainder
    //q = a/b;
    //r = a-(b*q);
    int r = a%b;
    cout<<r;
}
