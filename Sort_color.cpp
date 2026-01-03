#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

    int sortZeroOneTwo(vector<int> & nums)
    {
        int low=0, mid=0, high=nums.size()-1;

        while(low<=high)
        {
            if(nums[mid] == 2)
            {
                swap(nums[mid], nums[high]);
                high--;
            }
            else if(nums[mid == 1])
            {
                mid++;
            }
            else
            {
                swap(nums[mid],  nums[low]);
                low++;
                mid++;
            }
        }
    }   

int main()
{
    vector<int> nums = {2,0,2,1,1,0};
    sortZeroOneTwo(nums);
    for(auto num : nums)
    {
        cout << num << " ";
    }
    return 0;
}