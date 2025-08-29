#include <iostream>
using namespace std;

int main()
{

  char ch = 'A';
  int i = 0;
  while (i < 3)
  {
    int j = 0;
    while (j < 3)
    {
      cout << ch << " ";
      ch++;
      j++;
    }
    cout << endl;
    i++;
  }
  return 0;
}
