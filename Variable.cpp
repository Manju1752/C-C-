/* 7) write program to demonstrate the use of this pointer by differentaing 
between local variables and instance variables. */

#include <iostream>
using namespace std;

class Variable {
private:
    int value; 

public:

    Variable(int value) {
        this->value = value; 
    }

    
    void display(int value) { 
        cout << "Local value: " << value << endl;
        cout << "Instance value: " << this->value << endl; 
    }
};

int main() {
   Variable obj(17);  
    obj.display(52);   

    return 0;
}

/* output -
Local value: 52
Instance value: 17 */
