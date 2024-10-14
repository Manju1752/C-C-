/* 5)friend function - problem statments create a program to demonstrate the concept of friend function
the program should define a class rectangle & use a frd function to calculate the area of the rectangle*/


#include<iostream>
using namespace std;

class Rectangle{
	private:
		float length;
		float width;
	public:
		Rectangle(float l,float w):length(l),width(w){
		}
			friend float calculateArea(Rectangle rect);
};
float calculateArea(Rectangle rect){
	return rect.length *rect.width;
}
int main(){
	Rectangle rect(17.52,17.13);
	cout<<"Area of rectangle : "<<calculateArea(rect)<<endl;
	return 0;
}

/* output -
Area of rectangle : 300.118  */
