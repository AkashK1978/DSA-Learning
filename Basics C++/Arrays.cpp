#include<iostream>
using namespace std;

int main(){

    // 1-D Array
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5];

    // arr[3] += 10;
    // arr[4] = 16;
    // cout << "Your Given Array Is : " << arr[3] <<endl;
    // cout << "Your Given Array Is : " << arr[4];
// ----------------------------------------------------------------------------
    // 2-D Array
    // Multiple Arrays ko combine karke 2d array banta hai
    // int arr[row][col]
    // int arr[3][5];

    // arr[1][3] = 78;
    // cout <<arr[1][3];

// -------------------------------------------------------------------------------
    int arr[5] , i;
    for(i = 0; i<=4; i = i+1){
        cin >> arr[i];
    }
    for(i = 0; i<=4; i = i+1){
        cout << arr[i] << " ";
    }
    return 0 ;
}