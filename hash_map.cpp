#include<iostream>
#include<map>
using namespace std;

int main() 
{

    int n;
    cout << "Enter size of array :" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) 
    {
        mp[arr[i]]++;
    }

    // iterate over the map:
    for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
   

    int q;
    cout << "Enter number of queries :" << endl;
    cin >> q;
    while (q--) {
        int number;
        cout << "Enter the number to search the frequency :" << endl;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
    return 0;
}