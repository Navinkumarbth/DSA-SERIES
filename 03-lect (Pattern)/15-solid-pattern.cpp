
// // print solid stars
// #include <iostream>
// using namespace std;

// int main()
// {
//   // outer loop row observe
//   for (int row = 0; row < 3; row = row + 1)
//   {
//     // inner loop column observe
//     for (int col = 0; col < 5; col = col + 1)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//   for (int row = 0; row < 4; row = row + 1)
//   {
//     for (int col = 0; col < 4; col = col + 1)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// print n stars
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "Enter n number ";
//   cin >> n;

//   for (int row = 0; row < n; row = row + 1)
//   {
//     for (int col = 0; col < n; col = col + 1)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// print hollow rectangle
// #include <iostream>
// using namespace std;

// int main()
// {
//   for (int row = 0; row < 3; row = row + 1)
//   {
//     if (row == 0 || row == 2)
//     {
//       for (int col = 0; col < 5; col = col + 1)
//       {
//         cout << "* ";
//       }
//     }
//     else
//     {
//       cout << "* ";
//       for (int i = 0; i < 3; i = i + 1)
//       {
//         cout << "  ";
//       }
//       cout << "*";
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int rowCount, colCount;
//   cout << "Enter row and col number ";
//   cin >> rowCount;
//   cin >> colCount;
//   // Hollow rectangle
//   for (int row = 0; row < rowCount; row = row + 1)
//   {
//     // first row and last row print
//     if (row == 0 || row == rowCount - 1)
//     {
//       for (int col = 0; col < colCount; col = col + 1)
//       {
//         cout << "* ";
//       }
//     }
//     else
//     {
//       // remaining middle rows
//       // first star
//       cout << "* ";
//       // spaces
//       for (int i = 0; i < colCount - 2; i = i + 1)
//       {
//         cout << "  ";
//       }
//       // kast star
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// Print Half Pyramid
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "Enter row ";
//   cin >> n;

//   for (int row = 0; row < n; row = row + 1)
//   {
//     for (int col = 0; col < row + 1; col = col + 1)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// Print inverted half pyramid
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "Enter row ";
//   cin >> n;

//   for (int row = 0; row < n; row = row + 1)
//   {
//     for (int col = 0; col < n - row; col = col + 1)
//     {
//       cout << "* ";
//     }
//     cout << endl;
//   }
// }

// Print Numeric half pyramid
// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cout << "Enter number ";
//   cin >> n;

//   for (int row = 0; row < n; row = row + 1)
//   {
//     for (int col = 0; col < row + 1; col = col + 1)
//     {
//       cout << col + 1;
//     }
//     cout << endl;
//   }
// }

// Print inverted half pyramid
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number ";
  cin >> n;

  for (int row = 0; row < n; row = row + 1)
  {
    for (int col = 0; col < n - row; col = col + 1)
    {
      cout << col + 1;
    }
    cout << endl;
  }
}