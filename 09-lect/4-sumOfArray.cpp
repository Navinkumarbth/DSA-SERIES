#include <iostream>
using namespace std;

// Function to calculate sum of array elements.
int sumOfArray(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int size;
  cout << "Enter the size of array: ";
  cin >> size;

  int arr[size]; // Declare th array.

  cout << "Enter the elements in array: " << size << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }

  int sum = sumOfArray(arr, size); // Call function.
  cout << "Sum of all element: " << sum << endl;

  return 0;
}