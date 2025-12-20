#include<iostream>
using namespace std;
void insertion_sort(int arr[], int n, int i)
{
    if(i == n)
    return;

   int j = i;
   bool swapped = false;
   while(j>0 && arr[j-1] > arr[j])
    {
        int temp = arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
        swapped = true;
    }
    insertion_sort(arr, n, i+1);
    }

int main()
{
    int arr[] = {5,1,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n,0);
    cout << "Sorted Array : " ;
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    } 
    return 0;
}