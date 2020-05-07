#include <iostream>
using namespace std;

int main(){
    int *numPtr = new int;

    cout<<"*numPtr : "<<*numPtr<<endl;
    cout<<"numPtr : "<<numPtr<<endl;
    cout<<"&numPtr: "<<&numPtr<<endl;

    *numPtr = 42;
    cout<<"NumPtr assigned to 42"<<endl;
     cout<<"*numPtr : "<<*numPtr<<endl;
    cout<<"numPtr : "<<numPtr<<endl;
    cout<<"&numPtr: "<<&numPtr<<endl;


    return 0;
}