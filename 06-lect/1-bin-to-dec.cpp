#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n;
  cout << "Enter a binary number: " << endl;
  cin >> n;

  int ans = 0;
  int i = 0;

  while (n != 0)
  {
    int digit = n % 10; // last digit nikala (0 ya 1)
    if (digit == 1)
    {
      ans += pow(2, i); // position ke hisaab se add karo
    }
    n = n / 10; // ek digit hata do
    i++;
  }

  cout << "Decimal equivalent is: " << ans << endl;
  return 0;
}
