#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> &arr)
{ 
     bool sorted = false;
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i] < arr[i+1])
        sorted = true;
        else
        sorted = false;
        
    }
     if(sorted)
     return true;
    else
    return false;
}
int main()
{
    vector<int> arr = {1,3,5,7,9};
    
    if(check(arr))
     cout << "Array is Sorted " << endl ;
     else
     cout << "Array is not sorted " << endl;
    return 0;
}