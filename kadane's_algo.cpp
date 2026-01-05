#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int MaxSubArray(vector<int> & nums)
{
    int maxi = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < nums.size(); i++)
    {
       int sum=0;

        for(int j=i; j<nums.size(); j++)
        {
          sum += nums[j];
          maxi = max(maxi,sum);
        }
    }
    return maxi;
}
int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int maxi = MaxSubArray(nums);
    cout << "Maximum Subarray Sum is : " << maxi << endl;
    return 0;
}