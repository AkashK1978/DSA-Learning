// Given an array of integers nums, sort the array in ascending order and return it.
// You must solve the problem without using any built - in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

    void merge(vector<int> &arr, int low, int mid, int high)
    {
        vector<int> temp;
        // 1st array -> [low ---> mid]
        // 2nd array -> [mid + 1 ---> high]
        int left = low;
        int right = mid + 1;
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

        while (left <= mid)
        {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high)
        {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int> &arr, int low, int high)
    {
        if (low >= high)
            return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }

    vector<int> sortArray(vector<int> &arr)
    {
        int n = arr.size();
        mergeSort(arr, 0, n - 1);
        return arr;
    }

