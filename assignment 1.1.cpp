#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    string clg;
    cout<< "Enter full name: "<< endl;
    getline(cin,name);

    cout<< "Enter age: "<< endl;
    cin>> age;
    cin.ignore();
    
    cout<< "Enter college name: "<< endl;    
    getline(cin,clg);

    cout<< "Hello, " << name << " I see you are " << age << " years old and are currently studying at " << clg;
    return 0;
}



