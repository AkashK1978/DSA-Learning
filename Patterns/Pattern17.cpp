#include <iostream>
using namespace std;
/*

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/

void Print17(int num)
{
    int i, j;
    for (i = 0; i < num; i++)
    {
        //Spaces
        for (j = 0; j < num - i - 1; j++)
        {
            cout << " ";
        }
        //Characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) /2;
        for (j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch ;
           if(j <= breakpoint){
                ch = ch+1;
           }
           else{
            ch = ch-1;
           }
        }
        // Spaces
        for (j = 0; j < num - i - 1; j++)
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
        Print17(num);
    }

    return 0;
}