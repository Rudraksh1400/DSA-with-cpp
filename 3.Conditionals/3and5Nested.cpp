#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n%3==0)
    {
        if(n%5==0)
        {
            cout<<n<<" is divisible by 3 and 5";
        }
        else
        {
            cout<<n<<" is  divisible by 3 but not by 5";
        }
    }
    else
    {
        cout<<n<<" is not divisible by 3 and 5";
    }
}