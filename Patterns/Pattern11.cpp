#include <iostream>
using namespace std;
// *
// **
// ***
// ****
// *****
// ******
// *****
// ****
// ***
// **
void Print11(int num)
{
    int i, j;
    for (i = 0; i <= 2*num-1; i++)
    {
        int stars = i;
        if (i > num)
        {
            stars = 2*num-i;
        }
        
        for (j = 0; j <= stars; j++)
        {
            cout << "*";
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

        Print11(n);
    }

    return 0;
}