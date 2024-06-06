#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"Enter a number : ";
    cin>>n;
    x=1;
    for(int i=n;i>0;i--)
    {
        x=x*i;
    }
    cout<<x;
}