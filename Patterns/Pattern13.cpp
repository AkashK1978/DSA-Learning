#include <iostream>
using namespace std;
/*
1        1
12      21
123    321
1234  4321
1234554321
*/

void Print13(int n)
{
    int i, j;
    int space = 2 * (n - 1);
    for (i = 1; i <= n; i++)
    {
        // numbers
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // numbers
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space = space - 2;
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

        Print13(n);
    }

    return 0;
}