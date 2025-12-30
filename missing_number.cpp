#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int missing(vector<int>&nums, int n)
{
    for(int i=0;i<n;i++)
    {
        int flag =0;
        for(int j=0;j<n-1;j++)
        {
            if(nums[j]==i)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        return i;
    }
    return -1;
}

int main()
{
    int n=6;
    vector<int> nums={0,1,2,4,5,6};
    int ans = missing(nums,n);
    cout << "Missing Number is " << ans << endl;
    return 0;
}
