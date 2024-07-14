#include <iostream>
using namespace std;

/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

// void Print10(int n)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < n; i++)
//     {
//         // For printing the spaces before stars in each row
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // For printing the stars in each row
//         for (int j = 0; j < 2 * i + 1; j++)
//         {
//             cout << "*";
//         }
//         // For printing the spaces after the stars in each row
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }
//         // As soon as the stars for each iteration are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }

// void Print9(int n)
// {
//     // This is the outer loop which will loop for the rows.
//     for (int i = 0; i < n; i++)
//     {
//         // For printing the spaces before stars in each row
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // For printing the stars in each row
//         for (int j = 0; j < 2 * n - (2 * i + 1); j++)
//         {

//             cout << "*";
//         }
//         // For printing the spaces after the stars in each row
//         for (int j = 0; j < i; j++)
//         {
//             cout << " ";
//         }
//         // As soon as the stars for each iteration are printed, we move to the
//         // next row and give a line break otherwise all stars
//         // would get printed in 1 line.
//         cout << endl;
//     }
// }
void nStarDiamond(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (i = 0; i < num; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * num - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int test;
    cout << "Enter Test Case Number : ";
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int n;
        cout << "Enter the number for print : ";
        cin >> n;

        nStarDiamond(n);
    }

    return 0;
}