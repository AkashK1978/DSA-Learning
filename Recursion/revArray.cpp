#include <bits/stdc++.h>
using namespace std;


// using multiple variables..
/*void revArray(int arr[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    swap(arr[l], arr[r]);
    revArray(arr, l + 1, r - 1);
}

int main()
{
    int size;
    cout << "Enter Size Of Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter Array Values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    revArray(arr, 0, size - 1);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

// other method using formula
void revArray(int arr[],int i,int size){
    if(i >= size/2){
        return;
    }
    else{
        swap(arr[i],arr[size-i-1]);
        revArray(arr,i+1,size);
    }
}

int main()
{
    int size;
    cout << "Enter Size Of Array: ";
    cin >> size;
    int arr[size];
    cout << "Enter Array Values: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    revArray(arr, 0,size);

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}