#include<bits\stdc++.h>
using namespace std;

// Using Base Condition
// void printNum(int i, int n)
// {
//     if (i > n)
//     {
//         return;
//     }
//     else
//     {  
//         cout << i << endl;
//         printNum(i + 1, n);
//     }
// }

// int main()
// {

//     int n;
//     cin >> n;

//     printNum(1, n);

//     return 0;
// }

// Using Backtracking in Recursion Function
void printNum(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {
        printNum(i - 1, n);
        cout << i << endl;
    }
}

int main()
{

    int n;
    cin >> n;

    printNum(n, n);

    return 0;
}
