#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>& arr, int low, int high)
{
   int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i] <= pivot && i<= high-1)
        {
            i++;
        }
        while(arr[j]> pivot && j >= low +1)
        {
            j--;
        }
        if(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low]= arr[j];
    arr[j]=temp;
    return j;
}
void QuickSort(vector<int>&arr,int low, int high)
{
    if(low<high)
    {
       int pIndex = Partition(arr,low,high);
        QuickSort(arr,low,pIndex);
        QuickSort(arr,pIndex+1, high);
    }
}
int main()
{
    vector<int> arr={4,6,2,5,7,9,1,3};
    int low = 0;
    int high = arr.size()-1;
    QuickSort(arr,low,high);

    for(int i =0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}