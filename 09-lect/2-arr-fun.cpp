#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
  cout << "Printing the array " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "printing done " << endl;
}
int main()
{
  int third[15] = {2, 3};
  int n = 15;
  printArray(third, 15);
  int fourth[10] = {0};
  int x = 10;
  printArray(fourth, 10);
  return 0;
}