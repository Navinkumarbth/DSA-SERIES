
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter number: ";
  cin >> n;
  int number = 1;
  while (number < n)
  {
    cout << number << endl;
    number = number + 2;
  }
}
