#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void move(vector<int>&arr)
{
    int n = arr.size();
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    break;
                }
                
            }
        }
    }
}
int main()
{
    vector<int> arr = {0,1,0,3,12};
    move(arr);
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " " ;
    }
    return 0;

}