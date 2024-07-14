#include <bits\stdc++.h>
using namespace std;

// Using Base Condition
// void revNum(int i, int n)
// {
//     if (i < 1)
//     {
//         return;
//     }
//     else
//     {
//         cout << i << endl;
//         revNum(i - 1, n);
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     revNum(n, n);

//     return 0;
// }

// // Using Backtracking in Recursion Function
void revNum(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {
        revNum(i + 1, n);
        cout << i << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    revNum(1, n);

    return 0;
}



// Using single parameter
// void revNumber(int n)
// {
//     if (n < 1)
//     {
//         return;
//     }
//     else
//     {
//         cout << n << endl;
//         revNum(n - 1);
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     revNumber(n);

//     return 0;
// }
