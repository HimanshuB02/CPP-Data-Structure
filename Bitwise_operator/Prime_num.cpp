#include<iostream>
using  namespace std;

int main(){
    int n;
    cout<< "enter the value of n"<<endl;
    cin>>n;
    bool isPrime = 1;
    for (int i =2; i<n;i++){
        //reminder = 0,not a prime number
        if(n%i == 0){
           // cout<<"not a prime number"<<endl;
            isPrime = 0;
            break;
        }
        //reminder is not zero 
    
    }

    if(isPrime == 0){
        cout<<"is not a prime number"<<endl;

    }else
    {
        cout<<"is a prime number"<<endl;        
    }

}