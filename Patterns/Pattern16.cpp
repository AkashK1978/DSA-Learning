#include <iostream>
using namespace std;

/*
A B C D E
A B C D
A B C
A B
A
*/
void Print16(int n)
{
    int i, j;
    char ch;
    for (i = 0; i < n; i++)
    {
        for (ch = 'A'; ch <='A'+ (n-i-1); ch++)
        {
            cout << ch << " ";
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

        Print16(n);
    }

    return 0;
}