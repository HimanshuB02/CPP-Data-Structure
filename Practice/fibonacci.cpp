#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    cout << "Fibonacci Series is : " << a << " " << b << " ";
    int n = 5;
    for(int i=0; i<=n ; i++)
    {
        int next_number = a + b;
        cout << next_number << " ";
        a = b;
        b = next_number;
    }
}