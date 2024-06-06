#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter 1st integer : ";
    cin>>x;
    cout<<"Enter 2nd integer : ";
    cin>>y;
    cout<<"Enter 3rd integer : ";
    cin>>z;
    if(x>y && x>z)
    {
        cout<<x<<" is greater among three";
    }
    if(y>x && y>z)
    {
        cout<<y<<" is greater among three";
    }
    if(z>x && z>y)
    {
        cout<<z<<" is greater among three";
    }
    if(x==y && x>z)
    { 
        cout<<"1st number and 2nd number are equal and greater than 3rd number";
    }
    if(x==z && x>y)
    {
        cout<<"1st number and 3rd number are equal and greater than 2nd number";
    }
    if(y==z && y>x)
    {
        cout<<"2nd number and 3rd number are equal and greater than 1st number";
    }
    if(x==y && y==z)
    {
        cout<<"All three numbers are equal";
    }
}