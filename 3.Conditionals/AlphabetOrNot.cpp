#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if((int)ch>64 && (int)ch<91)           // A-Z
    {
        cout<<ch<<" is an uppercase alphabet";
    }
    if((int)ch>96 && (int)ch<123)          // a-z
    {
        cout<<ch<<" is a lowercase alphabet";       
    }
    if((int)ch<65)                         // Character having ASCII value smaller than A
    {
        cout<<ch<<" is not an alphabet";
    }
    if((int)ch>122)                        // Character having ASCII value bigger than z
    {
        cout<<ch<<" is not an alphabet";
    }
    if((int)ch>90 && (int)ch<97)           // Character having ASCII value bigger than Z but smaller than a
    {
        cout<<ch<<" is not an alphabet";
    }
}