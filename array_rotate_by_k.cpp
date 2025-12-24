#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

// Function to rotate the array to the right by k positions
    void rightrotate(vector<int>&arr , int n, int k)
     {
        if (n == 0) return;

        // Normalize k if greater than n
        k = k % n;

        // Store last k elements in a temporary array
        int temp[k];
        for (int i = n - k; i < n; i++)
         {
            temp[i - n + k] = arr[i];
        }

        // Shift the first n-k elements to the right by k steps
        for (int i = n - k - 1; i >= 0; i--) 
        {
            arr[i + k] = arr[i];
        }

        // Copy back the k elements to the start
        for (int i = 0; i < k; i++)
         {
            arr[i] = temp[i];
        }
    }

    // Function to rotate the array to the left by k positions
    void leftrotate(vector<int> & arr, int n, int k)
     {
        if (n == 0) return;

        // Normalize k if greater than n
        k = k % n;

        // Store first k elements in temporary array
        int temp[k];
        for (int i = 0; i < k; i++) 
        {
            temp[i] = arr[i];
        }

        // Shift remaining elements to the left by k positions
        for (int i = k; i < n; i++) 
        {
            arr[i - k] = arr[i];
        }

        // Copy back the stored elements to the end
        for (int i = 0; i < k; i++) 
        {
            arr[n - k + i] = temp[i];
        }
    }

int main()
{
    vector<int> arr ={1,2,3,4,5,6};
    int n = arr.size();
    int k;
    string pos;
    cout << "Enter no of elements to rotate and position : " << endl ;
    cin >> k;
    cin >> pos;
    if(pos == "right")
    rightrotate(arr,n,k);
    else if (pos == "left")
    leftrotate(arr,n,k);
    else 
    return 0;
     for(int i=0; i<n; i++)
     { 
        cout << arr[i] << " ";
      }
    return 0;
}