/* 1) problem statement write a program to demonstrate basic i/o operations in c++ the program should take a 
user name age as input and display getting manage. */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name; 
    int age;     
    
    cout << "Enter your name: ";
    getline(cin, name); 
    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
/* output-
Enter your name: manjusha
Enter your age: 21
Hello, manjusha! You are 21 years old. */
