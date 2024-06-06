#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if(n==1)
    {
        cout<<n<<" is neither prime nor composite";
    }
    else if(n==2)
    {
        cout<<n<<" is a prime number";
    }
    else 
    {
        for(int i=2;i<=n-1;i++)
        {
            if(n%i==0)
            {
                cout<<n<<" is a composite number";
                break;
            }
            else if(n%i!=0)
            {
                cout<<n<<" is a prime number";
                break;
            }
        }
    }
}