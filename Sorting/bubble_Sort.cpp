#include <bits/stdc++.h>
using namespace std;

void bubble_Sort(int arr[], int n)
{
  for (int i = n-1; i >= 0; i--)
  {
    bool swapped = 0; // for checking swap 
    for(int j = 0; j <= n-1; j++){
        if (arr[j] > arr[j+1])
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;

            swapped = 1; // for checking swap is happened or not.
        }
    }
        if(swapped == 0)
        break;
  }
  
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    // for input the array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // bubble Sort Function Arguments Passing
    bubble_Sort(arr, n);
    // for output the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}