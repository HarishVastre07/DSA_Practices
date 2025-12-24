#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}
int main()
{
    vector<int> arr ={1,2,3,4,5};
    int n = arr.size();
     rotate(arr,n);
     for (int i =0; i<n; i++)
     {
        cout << arr[i] << " ";
     }
    return 0;
}
