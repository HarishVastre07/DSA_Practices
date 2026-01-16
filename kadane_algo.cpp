#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int MaxSubArray(vector<int> &nums)
{
    long maxi = LONG_MIN;
    long sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxi)
            maxi = sum;

        if (sum < 0)
            sum = 0;
    }
    return maxi;
}
int main()
{
    vector<int> nums = {3, 3, 5, -2, 7, -4};
    int maxi = MaxSubArray(nums);
    cout << "Maximum Subarray Sum is : " << maxi << endl;
    return 0;
}