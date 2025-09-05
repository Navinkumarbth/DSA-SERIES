#include <iostream>
using namespace std;

// even -> 1
// odd -> 0
bool isEven(int a)
{
  if (a & 1)
  { // odd
    return 0;
  }
  else // even
  {
    return 1;
  }
}
int main()
{
  int num;
  cout << "Enter a number: " << endl;
  cin >> num;
  if (isEven(num))
  {
    cout << "Number is even: " << endl;
  }
  else
  {
    cout << "Number is odd: " << endl;
  }

  return 0;
}