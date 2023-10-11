#include <iostream>
#include <string>
using namespace std;

void calc() {
    int d;
    cout<<"Want to perform which operation ?";
    cout<<"For addition enter 0; \n For subtraction enter 1; \n For multiplcation enter 2; \n For division enter 3";
    cin>>d;

    int n1,n2;
    cout<<"Enter first no:"<<endl;
    cin>> n1;
    cin.ignore();
    cout<<"Enter second no:"<<endl;
    cin>> n2;
    cin.ignore();
    

    if (d==0)
    {
        cout<<n1+n2;
    }
    else if(d==1)
    {
        cout<<n1-n2;
    }
    else if(d==2)
    {
        cout<<n1*n2;
    }
    else if(d==3)
    {
        cout<<n1/n2;
    }

}
int main() {
    calc();
    return 0;
}