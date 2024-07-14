#include <iostream>
using namespace std;
/*

 *******
  *****
   ***
   
    *

*/

void Print9(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2 * num - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (j = 0; j <= i; j++)
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
        int num;
        cout << "Enter The Value For Print : ";
        cin >> num;
        Print9(num);
    }

    return 0;
}