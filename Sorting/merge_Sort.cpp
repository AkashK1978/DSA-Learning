#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays into a single sorted array
void merge(vector<int> &arr, int low, int mid, int high)
{
    // Create a temporary vector to store the merged elements
    vector<int> temp;

    // Indices for the left and right subarrays
    int left = low;
    int right = mid + 1;

    // Merge the two subarrays
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy any remaining elements from the left subarray
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy any remaining elements from the right subarray
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy the merged elements back into the original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

// Function to perform merge sort on the array
void mergeSort(vector<int> &arr, int low, int high)
{
    // Base case: if the array has one or no elements, it's already sorted
    if (low >= high)
        return;

    // Find the middle point of the array
    int mid = (low + high) / 2;

    // Recursively sort the left half
    mergeSort(arr, low, mid);

    // Recursively sort the right half
    mergeSort(arr, mid + 1, high);

    // Merge the two sorted halves
    merge(arr, low, mid, high);
}

int main()
{
    int n;
    cin >> n; // Read the number of elements in the array

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Read the elements of the array
    }

    // Perform merge sort on the entire array
    mergeSort(arr, 0, n - 1);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
