#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    for(int i=0; i<=num; i++)
    {
        if(i%num==0)
        {
            cout << "It is a prime number." << endl;
            break;
        }
        else
        {
            cout << "It is not a prime number." << endl;
            break;
        }
    }

}
