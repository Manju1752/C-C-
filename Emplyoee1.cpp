/*write c++ program to create class emplyoee which contain data members 
as emp_id , emp_name, basic salary,HRA,DA,gross salary.
 write member function to accept emp info calculate and display gross salary 
of an emp(DA=12% of basic salary HRA=30% of basic salary ) simple short code */

#include <iostream>
#include <string>

class Employee1{
private:
    int emp_id;
    std::string emp_name;
    double basic_salary;
    double HRA;
    double DA;
    double gross_salary;

public:
   
    void acceptInfo() {
        std::cout << "Enter Employee ID: ";
        std::cin >> emp_id;
        std::cout << "Enter Employee Name: ";
        std::cin.ignore(); 
        std::getline(std::cin, emp_name);
        std::cout << "Enter Basic Salary: ";
        std::cin >> basic_salary;

       
        HRA = 0.30 * basic_salary; 
        DA = 0.12 * basic_salary;  
        gross_salary = basic_salary + HRA + DA; 
    }

    
    void displayInfo() {
        std::cout << "\nEmployee ID: " << emp_id << std::endl;
        std::cout << "Employee Name: " << emp_name << std::endl;
        std::cout << "Basic Salary: " << basic_salary << std::endl;
        std::cout << "HRA: " << HRA << std::endl;
        std::cout << "DA: " << DA << std::endl;
        std::cout << "Gross Salary: " << gross_salary << std::endl;
    }
};

int main() {
    Employee emp;
    emp.acceptInfo();
    emp.displayInfo();
    return 0;
}


