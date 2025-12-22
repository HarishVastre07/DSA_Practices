#include<iostream>
using namespace std;
int main()
{
    int arr[] = {4,6,2,5,3,51,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = arr[0];
    int max2=arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i]>max1)
        {
            max2=max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        max2=arr[i];
    }

    if(max1 == max2)
    cout << "-1 " << endl;
else
    cout << "Second Largest Element is : " << max2 << endl;
    return 0;
}