#include<iostream>
#include<vector>
using namespace std;
int twoSum(vector<int>& nums, int target)
    {
        int left=0, right;

       while(left<=nums.size())
       {

        for(right=left+1; right<nums.size(); right++)
        {
            if(nums[left] + nums[right] == target)
            cout << left << "," << right << endl;
        }
        left++;
    }
    }
    int main()
    {
        vector<int> nums = {-6, 7, 1, -7, 6, 2};
        int target = 3;
        twoSum(nums,target);
        return 0;
    }