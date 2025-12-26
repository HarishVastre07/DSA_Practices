#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector<int>& nums, int target)
 {
    bool found = false;    
    for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == target)
            cout << i << endl;
            found = true;
         }
         if(!found)
         return -1;
    }
    int main()
    {
        vector<int> nums ={1,5,3,7,9,2};
        int target = 9;
        linearSearch(nums,target);
        return 0;
    }