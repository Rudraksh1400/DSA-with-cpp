#include<iostream>
using namespace std;
int main()
{
    // 4,7,10,13,16,19
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        a = a+3;
    } 
}