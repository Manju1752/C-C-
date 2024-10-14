/*2) problem statement Develope a simple Constructor that can perform addition, subtraction ,multiplication 
and division of two numbers.*/

#include <iostream>
using namespace std;

class Constructor{

public:
   
    Constructor(double a, double b) {
        cout << "Addition: " << a + b << endl;
        cout << "Subtraction: " << a - b << endl;
        cout << "Multiplication: " << a * b << endl;
        if (b != 0) {
            cout << "Division: " << a / b << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    }
};
int main() {
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    Constructor calc(a, b);

    return 0;
}

