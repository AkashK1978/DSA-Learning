#include <iostream>
using namespace std;
/*
E
D E
C D E
B C D E
A B C D E
*/
void Print18(int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (char ch = 'E'-i; ch <= 'E'; ch++)
        {
            cout << ch <<" ";
           
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

        Print18(n);
    }

    return 0;
}