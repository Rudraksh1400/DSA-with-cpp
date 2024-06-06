#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,f,n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        f=a+b;
        a=b;
        b=f;
    }
    cout<<b;

}