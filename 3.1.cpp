//question 1:
#include <iostream>
using namespace std;

struct Student {
    int studentID;
    double GPA;
};

void printStudentInfo(Student s) {
    cout<<"Student ID: "<<s.studentID<<endl;
    cout<<"GPA: "<<s.GPA<<endl;
}

int main() {
    Student alice = {101, 3.8};
    printStudentInfo(alice);
    return 0;
}

