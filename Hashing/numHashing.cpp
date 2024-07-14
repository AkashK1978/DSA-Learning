#include<bits\stdc++.h>
using namespace std;

// How Many times Numbers Appeared in an Array

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Pre-Computation
    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
       hash[arr[i]] += 1 ;
    }

    // "queries" refer to the requests made by the user to find out 
    // how many times a specific number appears in the array.
    int q;
    cin >> q;
    while (q --) // q = q - 1;
    {
        int number;
        cin >> number;

        //Fetching 
        cout << hash[number] << endl;
    }
    
    
    return 0;
}