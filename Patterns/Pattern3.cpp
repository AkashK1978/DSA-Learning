#include<iostream>
using namespace std;
/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

void Print3(int num)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i ; j++)
        {
           cout<<j<<" ";
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
        Print3(num);
    }

    return 0;
}