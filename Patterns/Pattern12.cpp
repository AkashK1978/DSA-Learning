#include <iostream>
using namespace std;
// 1
// 01
// 101
// 0101
// 10101
void Print12(int n)
{
    int i, j;
    int start = 1;
    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            start = 1;
        }
        else{
            start = 0;
        }
        for (j = 0; j <= i; j++)
        {
            cout << start;
            start = 1-start;
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

        Print12(n);
    }

    return 0;
}