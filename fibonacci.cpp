#include<iostream>
using namespace std;
int fib(int n)
   {
    int left= 0,right=1,ans=0;
    cout <<left<<" " << right << " ";
       for(int i=1; i<n;i++)
       {
        ans = left + right;
        cout << ans << " ";
        left = right;
        right = ans;
       }

    }

    int main()
    {
        fib(10);
        return 0;
    }