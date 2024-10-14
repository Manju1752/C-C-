/* 3) Problem Statement - create a program to demonstrate call by value and call by refrence in c++
The program should swap two numbers using both methods. */

#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 10, y = 20;

    cout << "Before swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    cout << "Before swapByReference: x = " << x << ", y = " << y << endl;
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}
/* output- 
Before swapByValue: x = 10, y = 20
After swapByValue: x = 10, y = 20
Before swapByReference: x = 10, y = 20
After swapByReference: x = 20, y = 10   */
