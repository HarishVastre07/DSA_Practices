#include<iostream>
using namespace std;
int main()
{
    int arr[] = {3,1,6,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max1 = arr[0];
    int max2;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max1 && )
        {
            max2=max1;
            max1 = arr[i];
        }
    }
    cout << "Second Largest Element is : " << max2 << endl;
    return 0;
}