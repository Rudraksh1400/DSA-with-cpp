#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter 1st number : ";
    cin>>x;
    cout<<"Enter 2nd number : ";
    cin>>y;
    cout<<"Enter 3rd number : ";
    cin>>z;
    if(x>y)
    {
        if(x>z)
        {
            cout<<x<<" is greatest number";
        }
    }
    if(y>z)
    {
        if(y>x)
        {
            cout<<y<<" is greatest number";
        }
    }
    if(z>x)
    {
        if(z>y)
        {
            cout<<z<<" is greatest number";
        }
    }
    if(x==y)
    {
        if(x>z)
        {
            cout<<x<<" is greatest number";
        }
    }
    if(x==z)
    {
        if(x>y)
        {
            cout<<x<<" is greatest number";
        }
    }
    if(y==z)
    {
        if(y>x)
        {
            cout<<y<<" is greatest number";
        }
    }
    if(x==y==z)
    {
        cout<<"All three numbers are equal";
    }
}