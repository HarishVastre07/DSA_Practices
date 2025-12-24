#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter Two values : " << endl;
    cin >> a >> b;

    cout <<"Value of a: " <<a << " and b : "<<b <<" before swapping " <<endl;

    a = a+b;
    b= a-b;
    a = a-b;

    cout <<"Value of a: " <<a << " and b : "<<b <<" After swapping " <<endl;
    return 0;
}