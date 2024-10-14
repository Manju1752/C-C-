/* 6)Problem Statement write problem to implement default parameterized and copy constructor also 
demonstrate the use of static data members and static member functions */

#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
    static int circleCount; 

public:
    
    Circle() : radius(1) { circleCount++; }

   
    Circle(float r) : radius(r) { circleCount++; }

   
    Circle(const Circle &c) : radius(c.radius) { circleCount++; }

    
    static void displayCount() {
        cout << "Total circles: " << circleCount << endl;
    }

   
    float area() {
        return 3.14 * radius * radius;
    }
};


int Circle::circleCount = 0;

int main() {
    Circle c1;              
    Circle c2(3.0);        
    Circle c3(c2);        

    Circle::displayCount(); 

    
    cout << "Area of c1: " << c1.area() << endl;
    cout << "Area of c2: " << c2.area() << endl;
    cout << "Area of c3: " << c3.area() << endl;

    return 0;
}
/* output - 
Total circles: 3
Area of c1: 3.14
Area of c2: 28.26
Area of c3: 28.26  */
