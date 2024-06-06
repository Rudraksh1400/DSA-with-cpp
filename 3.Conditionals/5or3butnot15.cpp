#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number : ";
   cin>>n;
   if(n%5==0 || n%3==0)
   {
    if(n%15!=0)
    {
        cout<<n<<" is divisible by 3 or 5 but not divisible by 15";
    }
    if(n%15==0)
    {
        cout<<n<<" is divisible by 3,5 and 15";
    }
   }
   if(n%5==0 && n%3!=0)
   {
    cout<<n<<" is divisible by 5 but not divisible by 3 and 15";
   }
   if(n%5!=0 && n%3==0)
   {
    cout<<n<<" is divisible by 3 but not divisible by 5 and 15";
   }
   if(n%5!=0 && n%3!=0)
   {
    cout<<n<<" is not divisible by 3,5 and 15";
   }
}