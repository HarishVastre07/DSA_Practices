#include<iostream>
#include<vector>
using namespace std;
int mostFrequentElement(vector<int>& nums)
 {
    int maxNum = 0;
    for(auto n : nums)
    {
        maxNum = max(maxNum, n);
    }
    vector<int> freq(maxNum +1 , 0);
       for(int i = 0; i<nums.size(); i++)
       {
        freq[nums[i]] += 1;
       }

       int max=0;
          for(int i=0; i<freq.size(); i++)
        {
         if(freq[i]>max)
         max = i;
         }
         
         cout << "Most Frequent Element(s): "<< max ;

    }

    int main()
    {
        vector<int> nums = {1,2,2,3,3,3,3,3,3,4,};
        mostFrequentElement(nums);

    }