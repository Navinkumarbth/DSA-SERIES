#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter n number: ";
  cin >> n;

  int row = 1;
  int count = 1;
  while (row <= n)
  {
    int col = 1;
    while (col <= row)
    {
      cout << count << " ";
      count = count + 1; // count++;
      col = col + 1;     // col++;
    }
    cout << endl;
    row = row + 1; // row++;
  }
}