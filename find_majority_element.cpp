#include <iostream>
#include<vector>
#include <unordered_map>
using namespace std;

    int findMajority(vector<int> & nums)
    {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(auto num : nums)
        {
            freq[num]++;
        }
        for(auto nu : freq)
        {
            if(nu.second > n/2)
            return nu.first;
        }
    }   

int main()
{
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    cout << findMajority(nums) << " ";
    return 0;
}