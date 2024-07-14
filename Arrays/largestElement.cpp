#include <bits\stdc++.h>
using namespace std;

// Approach 1 -> Brute Force Method
void largestElement(int arr[], int n)
{
    sort(arr, arr + n); // this is range of sort function from arr to arr + n means 0th index ----> n-1 th index ke aage wale tak.

    cout << "The largest element is: " << arr[n - 1] << endl;
}

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    largestElement(arr, n);

    return 0;
}

// Approach 2 -> Optimal Method
void largestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The largest element is: " << largest << endl;
}

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array numbers : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    largestElement(arr, n);

    return 0;
}