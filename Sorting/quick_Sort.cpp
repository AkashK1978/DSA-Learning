#include <bits/stdc++.h>
using namespace std;

// Function to partition the array on the basis of the pivot element
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low]; // Choose the first element as pivot
    int i = low;
    int j = high;

    while (i < j)
    {
        // Find the first element greater than pivot from the left
        while (arr[i] <= pivot && i < high)
        {
            i++;
        }
        // Find the first element less than or equal to pivot from the right
        while (arr[j] > pivot && j > low)
        {
            j--;
        }
        // If elements found, swap them
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    // Swap the pivot element with the element at index j
    swap(arr[low], arr[j]);
    return j; // Return the partition index
}

// Function to perform quicksort
void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        // Partition the array and get the partition index
        int partIndex = partition(arr, low, high);
        // Recursively sort elements before and after partition
        quickSort(arr, low, partIndex - 1);
        quickSort(arr, partIndex + 1, high);
    }
}

int main()
{
    int n;
    cin >> n; // Read the number of elements
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Read the elements
    }

    quickSort(arr, 0, n - 1); // Call quicksort on the entire array

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print the sorted array
    }

    return 0;
}
