#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findUnion(vector<int> &nums1, vector<int> &nums2)
{
    int left = nums1.size();
    int right = nums2.size();
    int i=0,j=0,count=0;
    int maxsize =left + right;
    vector<int> temp(maxsize);
    
while(i<left && j<right)
{
    if(nums1[i] == nums2[j])
        {
           if(count==0 ||temp[count-1]!=nums1[i])
           {
           temp[count++]=nums1[i];
        }
           i++;
           j++;
        }
    else if(nums1[i] < nums2[j])
        {
            if(count==0 ||temp[count-1]!=nums1[i])
           {
           temp[count++]=nums1[i];
            }
           i++;
        }
    else
        {
            if(count==0 ||temp[count-1]!=nums2[j])
        {
            temp[count++]=nums2[j];
         }
            j++;
        }
    }

while(i<left)
{
       if(count==0 ||temp[count-1]!=nums1[i])
           { temp[count++] = nums1[i];
           }
        i++;
}
    while(j<right)
    {
       if(count==0 ||temp[count-1]!=nums2[j])
        {
             temp[count++]=nums2[j];
        }
        j++;
    }
    for(int i=0; i<count; i++)
    {
        cout << temp[i] << " ";
    }
}

int main()
{
    vector<int> nums1 ={3, 4, 6, 7, 9, 9};
    vector<int> nums2 = {1, 5, 7, 8, 8};
    findUnion(nums1,nums2);
    
    return 0;
}