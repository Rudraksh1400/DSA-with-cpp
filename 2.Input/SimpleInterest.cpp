#include<iostream>
using namespace std;
int main()
{ 
    float p,r,n;
    cout<<"Enter Principle : ";
    cin>>p;
    cout<<"Enter Rate : ";
    cin>>r;
    cout<<"Enter time : ";
    cin>>n;
    cout<<"Simple Interest = "<<(p*r*n)/100;
}