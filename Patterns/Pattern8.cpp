#include <iostream>
using namespace std;
/*

    *
   ***
  *****
 *******
*********

*/

void Print8(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1 ; j++)
        {
            cout << " ";
        }
        for (j = 0; j < 2*i+1; j++)
        {
            cout << "*" ;
        }
        for (j = 0; j < num - i - 1; j++)
        {
            cout << " " ;
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
        Print8(num);
    }

    return 0;
}