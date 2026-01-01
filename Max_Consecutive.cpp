#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int max_Consecutive(vector<int> &nums)
{
    int n = nums.size();
    int count=0,maxi=0;;
    for(int i =0;i<n;i++)
    {
        if(nums[i]==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
        maxi=max(maxi,count);
    }
    return maxi;
}
int main()
{
    vector<int> nums ={1,1,0,1,1,1,1,1,0,0,1};
  int ans=max_Consecutive(nums);
  cout<< "Maxixmum consecutive : " << ans << endl;
  return 0;
}