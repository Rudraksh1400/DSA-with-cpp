#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            x=j+(char)64;
            cout<<(char)x;
        }
        cout<<endl;
    }
}