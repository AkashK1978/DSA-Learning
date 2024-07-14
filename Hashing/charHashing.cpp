#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Pre-Computation
    // int hash[26] = {0}; ---> for lower case
    int hash[256] = {0}; // for all lower and upper both
    for (int i = 0; i < s.size(); i++)
    {
        // int index = s[i] - 'a'; // Calculate the index for Lower the character
        int index = s[i] ; // Calculate the index for the ALL character
        hash[index]++;          // Increment the count for this character
    }

    int q;
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        // Fetching
        // int index = ch - 'a';        // Calculate the index for the query character
        int index = ch ;        // Calculate the index for the query character
        cout << hash[index] << endl; // Output the count for this character
    }

    return 0;
}
