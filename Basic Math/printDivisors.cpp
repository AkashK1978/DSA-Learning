// #include <bits/stdc++.h>
// using namespace std;

// // BRUTE FORCE METHOD

// int *printDivisors(int n, int &size)
// {
//     // Allocate memory for
//     // the array of divisors
//     int *divisors = new int[n];
//     // Initialize the count of divisors
//     int count = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             // Add the divisor to the array
//             divisors[count++] = i;
//         }
//     }
//     // Update the size parameter
//     // with the count of divisors
//     size = count;
//     // Return the array of divisors
//     return divisors;
// }

// int main()
// {
//     int number = 12;
//     int size;
//     int *divisors = printDivisors(number, size);

//     cout << "Divisors of " << number << " are: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << divisors[i] << " ";
//     }
//     cout << std::endl;

//     delete[] divisors;

//     return 0;
// }



// optimal approach using vector

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> findDivisors(int n)
{
    // Initialize an empty
    // vector to store the divisors
    vector<int> divisors;

    // Iterate up to the square
    // root of n to find divisors
    // Calculate the square root of n
    int sqrtN = sqrt(n);

    // Loop from 1 to the
    // square root of n
    for (int i = 1; i <= sqrtN; ++i)
    {
        // Check if i divides n
        // without leaving a remainder
        if (n % i == 0)
        {
            // Add divisor i to the list
            divisors.push_back(i);

            // Add the counterpart divisor
            // if it's different from i
            if (i != n / i)
            {
                // Add the counterpart
                // divisor to the list
                divisors.push_back(n / i);
            }
        }
    }

    // Return the list of divisors
    return divisors;
}

int main()
{
    int number = 12;
    vector<int> divisors = findDivisors(number);

    cout << "Divisors of " << number << " are: ";
    for (int divisor : divisors)
    {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}
