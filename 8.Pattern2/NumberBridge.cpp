#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1;i<=(n*2)-1;i++)
    {
        cout<<i;
    }
    cout<<endl;
    for(int j=1;j<=n-1;j++)
    {
        for(int a=1;a<=n-j;a++)
        {
            cout<<a;
        }
        for(int b=1;b<=j*2-1;b++)
        {
            cout<<" ";
        }
        for(int c=j+n;c<=(n*2)-1;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
}