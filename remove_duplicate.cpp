#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int> &arr)
{
    if(arr.size() == 0)
     return 0;
    int unique = 0;  
    
    for(int i = 1; i < arr.size(); i++)
    {
        if(arr[i] != arr[unique])
        {
            unique++;
            arr[unique] = arr[i];
        }
    }
    
    for(int i = unique + 1; i < arr.size(); i++)
    {
        arr[i] = 0;
    }
    
    return unique + 1;
}

int main()
{
    vector<int> arr = {1,1,1,1,2,2,2,3,3,4,4,4,5,5};
    int unique_count = removeDuplicates(arr);
    
    cout << "Array after removing duplicates: ";
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}