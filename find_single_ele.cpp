#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
 int singleNumber(vector<int>& nums)
    {
        unordered_map<int,int> freq;

        for(auto num : nums)
        freq[num]++;

        for(auto num : nums)
            if(freq[num] == 1)
                return num;

                return -1;
    }
    int main()
    {
        vector<int> nums = {4,1,2,1,2};
       cout << singleNumber(nums);
        return 0;
    }