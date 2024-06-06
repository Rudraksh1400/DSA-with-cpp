#include<iostream>
using namespace std;
int main()
{
    float cp,sp;
    cout<<"Enter cost price : ";
    cin>>cp;
    cout<<"Enter selling price : ";
    cin>>sp;
    if(cp>sp)
    {
        cout<<"There is a profit"<<endl<<"Total profit = "<<cp-sp;        
    }
    if(cp<sp)
    {
        cout<<"There is a loss"<<endl<<"Total loss = "<<sp-cp;
    }
    if(cp==sp)
    {
        cout<<"Cost price = Selling price"<<endl<<"Therefore no profit or loss";
    }
}