// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.

#include<iostream>
#include<string>
using namespace std;

class Student {
private:
    string name;
    char div;
    int rollNumber;
    float marks;

public:
    Student(string name, char div, int rollNumber, float marks) {
        this -> name = name;
        this -> div = div;
        this -> rollNumber = rollNumber;
        this -> marks = marks;
    }

    char calcGrade(float marks){
        if (marks > 80)
            return 'A';
        else if (marks > 60 && marks < 80)
            return 'B';
        else if (marks > 40 && marks < 60)
            return 'C';
        else if (marks > 35 && marks < 40)
            return 'D';
        else
            return 'F';
    }

    float getMarks(){
        return marks;
    }

    void displayStudentInfo(char grade) {
        cout << "Student Name: " << name <<endl;
        cout << "Division: " << div << endl;
        cout << "Student Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade : " << grade << endl;
        cout << endl;
    }

};

int main() {

    Student s1("Onkar Nardekar", 'A', 101, 34.90);
    Student s2("Aakash Panda", 'A', 102, 49.20);
    Student s3("Arfatul Shaikh", 'A', 103, 91.90);
    Student s4("Sumit Indulkar", 'A', 104, 75.90);

    s1.displayStudentInfo((s1.calcGrade(s1.getMarks())));
    s2.displayStudentInfo((s2.calcGrade(s2.getMarks())));
    s4.displayStudentInfo((s4.calcGrade(s4.getMarks())));

    return 0;
}
