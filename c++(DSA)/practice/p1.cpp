//if else

#include<iostream>
using namespace std;
/*int main(){
    int a,b;
    //cin>>a >>b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<< " enter the value of b"<<endl;
    cin>>b;
    if(a>b){
        cout<<"A is bigger then b"<<endl;
    }else{
        cout<<"A is less then b"<<endl;
    }
*/
        ///////////   /////////////        ////////////////     /////////////////     ////////////////
/*int main(){
    int a,b;
    cout << "Enter the first number A"<<endl;
    cin>>a;
    cout<<"Enter the second number B"<<endl;
    cin>>b;

    if (a>b){
        cout<< "a>b"<<endl;

    }else{
        cout<< "a<b"<<endl;
    }

}

*/
 ///////////////////////////////////////////////////////////////////////////////////////////////////
/* int main(){
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;

    if(a>0){
        cout<< "The number is positive"<<endl;
    }else{
        if(a<0){
            cout<<"The number is negative"<<endl;
        }else{
            cout<<"The number is zero"<<endl;
        }
    }
}

            ///////////////////////////////////////////////////////////////////////////////////
int main(){
     int n;
     cout<<"enter the number "<<endl;
     cin>>n;


     int i = 1;


     while(i<=n){
        cout<<i<<endl;
        i=i+1;
     }
}

////////        /////////////       //////////////      /////////////////////       ///////////



int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    int i = 1;
    int sum = 0;

    while(i<=n){
        sum = sum +i;
        i= i + 1; 
    }
     cout<<"value of sum is "<< sum <<endl;
}

///////////   ////////// ///////////////  /////////////   /////////// /////////////       //////////



int main(){
    int n;
    cout<< "Enter the number"<<endl;
    cin>>n;

    int sum = 0;
    int i = 2;


    while(i<=n){

        sum = sum +i;
        i = i+2;

    }
    cout<<"The sum is "<<sum<<endl;
}
*/
////////////    //////////NUMBER IS PRIME OR NOT ///////////////////////////    ///////////////////   

int main(){
      int n ;
      cin>>n;

      int i = 2;

      while(i<n){
        //divide hogya.   not prime
        if(n%i ==0){
            cout<<" not prime for "<< i<<endl;

        }else{
            cout<< "Prime for "<< i <<endl;
        }
        i = i+1;
      }


}

