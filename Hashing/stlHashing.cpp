#include<bits\stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Pre-Computation
    map<long ,long>mpp;
    // map<char ,long>mpp; --> for character string 
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
        // mpp[s[i]]++;  --> for string index
    }
    
    // for checking order of values in map : just iterate in map
    for(auto it : mpp){
        cout << it.first << " -> " << it.second<<endl;
    }

    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
    // Fetching
        cout  << mpp[num] <<endl;
    }
    return 0;
}