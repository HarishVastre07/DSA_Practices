#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

    void Merge(vector<int>& nums,int low, int mid, int high) 
    {
       vector<int> temp;
       int left = low;
       int right = mid+1;
       while(left <= mid && right <= high)
       {
        if(nums[left]<= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            right++;
        }
       }
       while(left <= mid)
       {
        temp.push_back(nums[left]);
        left++;
       }
       while(right <= high)
       {
        temp.push_back(nums[right]);
           right++;
       }

       
       for(int i=low; i<=high; i++)
       {
        nums[i] = temp[i-low];
       }
    }
    void MergeSort(vector<int> &nums , int low, int high)
    {
        if(low>=high)
        return;

    int mid = (low + high) / 2;
    MergeSort(nums,low ,mid);
    MergeSort(nums, mid+1, high);
    Merge(nums,low,mid,high);
    }
int main()
{
    vector<int> nums = {3,5,1,2,8,4};
    int low = 0;
    int high = nums.size()-1;
    MergeSort(nums,low,high);
       for(int i=0; i<nums.size();i++)
       {
        cout << nums[i] << " ";
       }
    return 0;
}