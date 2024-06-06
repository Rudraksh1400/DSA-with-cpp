#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer : ";
    cin>>n;
    if(n%5==0 && n%3==0)
    {
        cout<<n<<" is divisible by 5 and 3";
    }
    if(n%5==0 && n%3!=0)
    {
        cout<<n<<" is divisible by 5 but not divisible by 3";
    }
    if(n%5!=0 && n%3==0)
    {
        cout<<n<<" is divisible by 3 but not divisible by 5";
    }
    if(n%5!=0 && n%3!=0)
    {
        cout<<n<<" is not divisible by 5 and 3";
    }
}