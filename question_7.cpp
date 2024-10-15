// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.

#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    double empSalary;

public:
    Employee(int empID, string empName, double empSalary) {
        this -> empID = empID;
        this -> empName = empName;
        this -> empSalary = empSalary;
    }

    void setSalaryBasedOnPerformance(float percent){
        empSalary += (empSalary * percent) / 100;
    }

    void displaySalary(){
        cout << "Salary: " << empSalary <<endl;
    }
};

int main() {

    Employee emp1(1, "Onkar Nardekar", 3000.0);
    Employee emp2(2, "Aakash Panda", 4000.0);

    emp2.setSalaryBasedOnPerformance(9.0);

    emp1.displaySalary();
    emp2.displaySalary();

    return 0;
}
