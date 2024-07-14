#include <iostream>
using namespace std;

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void Print15(int n)
{
    int i, j;
    int value = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << value << " ";
            value = value + 1;
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

        Print15(n);
    }

    return 0;
}