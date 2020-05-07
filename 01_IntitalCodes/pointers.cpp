#include <iostream>
using namespace std;

int main(){

    int num = 7;
    cout<<"Nmber: "<<num<<endl;
    cout<<"NUmber Address"<<&num<<endl;

    int *p = &num;
    cout<<"Value of pointer p: "<<p<<endl;
    cout<<"Dereferenced value of p: "<<*p<<endl;
    cout<<"Actual address of p: "<<&p<<endl;

    //Modifying p and num
    *p = 7;
    cout<<"NUmber :"<<num<<endl;
    cout<<"Address referened by p"<<p<<endl;
    cout<<"Dereferenced value of p : "<<*p<<endl;

    return 0;
}