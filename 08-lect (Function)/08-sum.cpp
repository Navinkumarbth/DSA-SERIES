#include <iostream>
using namespace std;

// function declaration or signature and definaiton
int add(int a, int b)
{
  int result = a + b;
  return result;
}

int main()
{
  int a;
  cout << "Enter the value of a " << endl;
  cin >> a;

  int b;
  cout << "Enter the value of b" << endl;
  cin >> b;

  int sum = add(a, b); // function invoke or call
  cout << "Addition result is " << sum << endl;
}