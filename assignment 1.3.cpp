#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<< "Enter first no: "<<endl;
    cin>> a;
    cout<< "Enter second no: "<<endl;
    cin>> b;
    cout<< "Enter third no: "<<endl;
    cin>> c;

    if(a>b & a>c)
    {
        cout<<"The greatest no is: "<<a;
    }
    if(b>a & b>c)
    {
        cout<<"The greatest no is: "<<b;
    }
    if(c>a & c>b)
    {
        cout<<"The greatest no is: "<<c;
    }
    return 0;
}