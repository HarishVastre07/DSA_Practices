#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout << "Enter string :" << endl;
    cin >> s;
    
     
    int hash[256] = {0};
    
    //pre-computing
    for(int i = 0; i<s.size(); i++)
    {
        hash[s[i]] +=  1;
    }


    //fetching
    int q;
    cout << "Enter number of queries :"<< endl;
    cin >> q;

    while(q--)
    {
        char character;
        cout << "Enter the character to search the frequency :" << endl;
        cin >> character;
        cout << "frequency of " << character << " is " << hash[character] << endl;
    }

    return 0;
}