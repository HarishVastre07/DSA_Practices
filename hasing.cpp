#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> countFrequencies(vector<int>& nums)
     {
        int maxNum =0;
    for(int num : nums) 
    {
        maxNum = max(maxNum, num);
    }
        vector<int> freq(maxNum + 1, 0);

        for(int i=0; i<nums.size(); i++)
        {
            freq[nums[i]] += 1;
        }

        for(int i = 1; i <= maxNum; i++) {
        if(freq[i] > 0)
         {
            cout <<"[" << i << "," << freq[i] << "]" << endl;
        }

    }
}
int main()
{
    vector<int> nums = {5,5,5,5};
    countFrequencies(nums);
    
    cout << "\nPress Enter to exit..." << flush;
    cin.ignore();
    cin.get();
    
    return 0;
}