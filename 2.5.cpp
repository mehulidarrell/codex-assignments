#include <iostream>
#include <string>
using namespace std;

int main() {
    string a= "chocochips";
    string b;
    while (true) {
        cout<<"Enter password: ";
        cin>> b;
    
        if (b==a) {
            cout<<"Access granted";
            break;
    }
        else{
            cout<<"Invalid password. Try Again";
            break;
    }}

    return 0;
}