#include<iostream>
using namespace std;

int areaOfCircle(int r)
{

	float area= (3.14 * r * r);
	return area;
}

int main() 
{
	float r;
	cout<<"Enter n number "<<endl;
	cin>>r;

	float ans = areaOfCircle(r);
	cout<<"Area of circle is "<< ans <<endl;
	return 0;
}