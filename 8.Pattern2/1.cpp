#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int k=1;k<=n;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}