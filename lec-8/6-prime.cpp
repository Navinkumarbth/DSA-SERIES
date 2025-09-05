#include <iostream>
using namespace std;

// 1 -> Prime no.
// 0 -> Not a prime no.
bool isPrime(int n)
{
  for (int i = 2; i < n; i++)
  {
    // divide ho jaaye tab, not a prime number
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int n;
  cout << "Enter a number: " << endl;
  cin >> n;

  if (isPrime(n))
  {
    cout << "It is prime number: " << endl;
  }
  else
  {
    cout << "It is not prime number: " << endl;
  }
}