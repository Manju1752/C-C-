// Write program to implement single and multiple inheritance of C++ .

#include<iostream>
using namespace std;

class Person{
	string name;
	int age;
	string address;
	
	public:
		void getdata(){
			cout<<"Enter your Name :";
			cin>>name;
			cout<<"Enter your age :";
			cin>>age;
			cout<<"Enter your address :";
			cin>>address;
		}
		
		void Display(){
			cout<<"\nName :"<<name<<endl;
			cout<<"\nAge :"<<age<<endl;
			cout<<"\nAddress :"<<address<<endl;
		}
};
class Student :public Person{
	int Stid;
	public:
		void set_s(){
			cout<<"Enter Student ID :";
			cin>>Stid;
		}
		void print_s(){
			cout<<"\nStid :"<<Stid<<endl;
		}
};
class Emplyoee : public Person{
	int Empid;
	public:
		void set_e(){
			cout<<"Enter Emplyoee ID :";
			cin>>Empid;
		}
		void print_e(){
			cout<<"\nEmpid :"<<Empid<<endl;
		}
};
int main(){
	Person p;
	p.getdata();
	p.Display();
	Student s;
	s.set_s();
	s.print_s();
	Emplyoee e;
	e.set_e();
	e.print_e();
	
}
