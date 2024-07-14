#include <iostream>
using namespace std;

/*
A
B B
C C C
D D D D
E E E E E
*/
// void Print14(int n)
// {
//     int i, j;
//     char ch = 'A';
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout<< ch << " ";
           
//         }
//         ch = ch + 1;
//         cout << endl;
//     }
// }


/*
A
B C
D E F
G H I J
K L M N O
*/
// void Print14(int n)
// {
//     int i, j;
//     char ch = 'A';
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout<< ch << " ";
//             ch = ch + 1;
//         }
        
//         cout << endl;
//     }
// }

/*
A
A B
A B C
A B C D
A B C D E
*/
void Print14(int n)
{
    int i, j;
    char ch ;
    for (i = 0; i < n; i++)
    {
        for (ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout<< ch << " " ;
           
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

        Print14(n);
    }

    return 0;
}