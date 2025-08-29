
// check uppercase and lowercase and numeric

#include <iostream>
using namespace std;

int main()
{
  char ch;
  cout << "Enter a number ";
  cin >> ch;

  if (ch >= 'a' && ch <= 'z')
  {
    cout << "Lower case letter" << endl;
  }
  else if (ch >= 'A' && ch <= 'Z')
  {
    cout << "Upper case letter";
  }
  else if (ch >= 0 && ch <= 9)
  {
    cout << "Numeric letter";
  }
  else
  {
    cout << "Special charecter";
  }
  return 0;
}