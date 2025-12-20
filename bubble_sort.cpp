#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> &nums)
{
    int n = nums.size();
    bool swapped;
    
    for(int i = 0; i< n-1; i++)
    {
        swapped = false;
        for(int j = 0; j<n-i-1; j++)
        {
            if(nums[j]> nums[j+1])
            {
                int temp = nums[j];
                nums[j]= nums[j+1];
                nums[j+1] = temp;
                swapped = true;
            }
        }
        if(!swapped)
        break;

        cout << "Runs" << endl;
    }
}

int main()
{
    vector<int> nums ={10,20,30,40,50};
    bubble_sort(nums);
    cout << "Sorted array : ";
    for (int i=0; i<nums.size();i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}