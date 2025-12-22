#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n)
{
    if(n==1)
    return;
   
    for(int j=0; j<n-2; j++)
    {
        if(arr[j]> arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
bubble_sort(arr, n-1);
}
int main()
{
int arr[] = {3,5,1,6,2,4};
int n = sizeof(arr)/sizeof(arr[0]);
cout << n << "size" << endl;
bubble_sort(arr,n);

cout << "Sorted array : ";
for(int i=0; i<n; i++)
{
    cout << arr[i] << " "; 
}
    return 0;
}