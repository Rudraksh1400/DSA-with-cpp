#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	cout<<"Guess a number from '0' until '100'"<<endl;
    int x = time(0);
    srand(x);
    int y = rand()%100;
	//cout<<y<<endl;
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	while(n!=y)
	{
		if(n>y)
		{
			cout<<"Enter a smaller value : ";
			cin>>n;
		}
		else if(n<y)
		{
			cout<<"Enter a greater value : ";
			cin>>n;
		}
		else break;
	}
	cout<<"Correct value = "<<n;
}