#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
   // cin>>n;
    cout<<"printing count from 1 to n"<<endl;
  /*  int i = 1;
    for( ; ; ){
        if(i<=n){
            cout<<i <<endl;

        }else{
            break;
        }
        i++;
    }
    */


   for(int a=5,b=6,c=7;a>=0&& b>=1 && c>=3;a--,b--,c--){
    cout<<a <<" "<< b << " "<< c << endl;
   }
}