#include<iostream>
using namespace std;

int evenOdd(int n)
{
	if(n%2==0)
	{
		cout<<"Number is even "<<endl;
	}
	else
	{
		cout<<"Number is odd "<<endl;
	}
	return n;
}

int main()
{
	int n;
	cout<<"Enter n number "<<endl;
	cin>>n;

	int ans = evenOdd(n);
	cout<< ans;

	return 0;
}