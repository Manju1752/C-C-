/* 4) Problem Statement - Develop a c++ program store details such as name and roll number for multiple students 
using an array of objects */

#include<iostream>
#include<string>
using namespace std;

class Student4{
public:
    string name;
    int rollNumber;

    Student4(string n, int r) : name(n), rollNumber(r) {}
};

int main() {
    const int SIZE = 3; 
    Student4 students[SIZE] = {
        Student4("Anju", 101),
        Student4("Manju", 102),
        Student4("Chaitu", 103)
    };

    for (int i = 0; i < SIZE; ++i) {
        cout << "Name: " << students[i].name << ", Roll Number: " << students[i].rollNumber << endl;
    }

    return 0;
}
/* output -
Name: Anju, Roll Number: 101
Name: Manju, Roll Number: 102
Name: Chaitu, Roll Number: 103   */
