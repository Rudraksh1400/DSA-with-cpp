#include<iostream>
using namespace std;
int main()
{
    float x,y;
    char ch;
    cout<<"Enter 1st number : ";
    cin>>x;
    cout<<"Enter 2nd number : ";
    cin>>y;
    cout<<"Enter opertion : ";
    cin>>ch;
    switch(ch)
    {
        case '+':
            cout<<"Addition = "<<x+y;
            break;
        case '-':
            cout<<"Substraction = "<<x-y;
            break;
        case '*':
            cout<<"Multiplication = "<<x*y ;
            break;
        case '/':
            cout<<"Division = "<<x/y ;
            break;      
    }
}