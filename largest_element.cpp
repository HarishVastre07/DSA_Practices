#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int find1(vector<int>& arr,int n)          // Method 1
{
    int max=arr[0];
    
    for(int i=1; i<n; i++)
    {
        if(arr[i]> max)
        max = arr[i];
    }
    return max;
}
int find2(vector<int> &arr)    // Method 2
{
    sort(arr.begin(), arr.end());

    return arr[arr.size()-1];
}
int main()
{
    vector<int> arr1 = {5,3,8,12,7,46,96,1}; 
    vector<int> arr2 = {5,6,9,1,42,4,61,7}; 
    int n = arr1.size();
    cout << "Largest Element is : " << find1(arr1,n) << endl;
    cout << "Largest Element is : " << find2(arr2) << endl;
    
    return 0;
}