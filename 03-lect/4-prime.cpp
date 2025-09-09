
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter N number: ";
  cin >> n;

  int i = 2;
  while (i < n)
  {
    if (n % 2 == 0)
    {
      cout << "Not prime number " << i << endl;
    }
    else
    {
      cout << "Prime number " << i << endl;
    }
    i = i + 1;
  }
  return 0;
}