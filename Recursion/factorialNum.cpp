#include<bits\stdc++.h>
using namespace std;

// Using Funnctional Method //
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;

    cout << "factorial Of N Number : " << fact(n);

    return 0;
}
