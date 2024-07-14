#include <bits\stdc++.h>
using namespace std;

// Approach 1 -> Brute Force Method
void smallestElement(int arr[], int n)
{
    sort(arr, arr + n); // this is range of sort function from arr to arr + n means 0th index ----> n-1 th index ke aage wale tak.

    cout << "The Smallest element is: " << arr[0] << endl;
}

int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter the array numbers : ";
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    smallestElement(arr, n);

    return 0;
}

// Approach 2 -> Optimal Method
void smallestElement(int arr[], int n)
{
    int smallest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    cout << "The smallest element is: " << smallest << endl;
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

    smallestElement(arr, n);

    return 0;
}