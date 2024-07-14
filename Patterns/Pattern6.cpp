#include <iostream>
using namespace std;
/*

1 1 1 1 1
2 2 2 2
3 3 3
4 4
5

*/

void Print4(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num-i+1; j++)
        {
            cout << i << " ";
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
        Print4(num);
    }

    return 0;
}