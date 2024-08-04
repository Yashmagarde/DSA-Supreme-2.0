#include<iostream>
using namespace std;

int main(){

    int a = 5; //assignment operator
    int b = 2;

    //arithmatic

    // cout << a+b <<endl;
    // cout << a-b <<endl;
    // cout << a*b <<endl;
    // cout << a/b <<endl;
    // cout << a%b <<endl;

    //relational

    // cout<< (a>b)<<endl ;
    // cout<< (a<b)<<endl ;
    // cout<< (a>=b)<<endl ;
    // cout<< (a<=b)<<endl ;
    // cout<< (a==b)<<endl ;
    // cout<< (a!=b)<<endl ;

    //logical

    int age = 19;
    int car = 4;

    if(age>=18 && car>=1){
        cout<<"licence mil jayega"<<endl;
    }

    if(age>=18 || car>=1){
        cout<<"licence mil jayega"<<endl;
    }

    cout<< !age;





    return 0;
}