#include<bits\stdc++.h>
using namespace std;

void insertion_Sort(int arr[] , int n){
    for (int i = 1; i < n; i++)
    {
        for(int j=i ; j>0; j--){
            if (arr[  j] < arr[j-1])
            {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }
            else{
                
                break;
            }
            
        }
    }
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_Sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}