#include <iostream>
using namespace std;

int main () {
    float a;
    cout<<"Enter a floating point number: ";
    cin>> a;

    int b= static_cast<int>(a);

    cout<<"Typecasted Value: "<<b<<endl;

    return 0;
    
}