#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void missing(vector<int>&nums, int n)
{
    // Create a boolean array to mark present numbers
    vector<bool> present(n+1, false);
    
    // Mark all numbers that are present in the array
    for(int num : nums)
    {
        if(num >= 0 && num <= n)
        {
            present[num] = true;
        }
    }
    
    // Find and print missing numbers from 0 to n
    cout << "Missing number(s): ";
    for(int i=0; i<=n; i++)
    {
        if(!present[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n=6;
    vector<int> nums={0,1,2,4,5,6};
    
    missing(nums, n);
    return 0;
}
