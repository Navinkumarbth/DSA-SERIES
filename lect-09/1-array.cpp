#include <iostream>
using namespace std;

int main()
{
  // declare
  int number[15];

  // accessing an array
  cout << "Array at 15th position: " << number[14] << endl
       << endl;
  // cout << "Array at 20th position: " << number[19] << endl;

  // initialization an array
  int second[3] = {2, 4, 7};
  // accessiing an element
  cout << "Array at 3th position: " << second[2] << endl
       << endl;

  int third[15] = {2, 3};
  int n = 15;
  cout << "Printing the array: " << endl;
  // print the array
  for (int i = 0; i < n; i++)
  {
    cout << third[i] << " ";
  }

  // initializing all location with 0
  int fourth[10] = {0};
  int x = 10;
  cout << "Printing the array: " << endl;
  // print the array
  for (int i = 0; i < x; i++)
  {
    cout << fourth[i] << " ";
  }

  // initializing all location with 1 [Not possible with below line]
  int fifth[10] = {1};
  int y = 10;
  cout << "Printing the array: " << endl;
  // print the array
  for (int i = 0; i < y; i++)
  {
    cout << fifth[i] << " ";
  }
  return 0;
}