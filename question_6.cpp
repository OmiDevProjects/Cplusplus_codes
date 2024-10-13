// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

#include<iostream>
#include<string>
using namespace std;

class Triangle {
private:
    int side1, side2, side3;

public:
    Triangle(int side1, int side2, int side3) {
        this -> side1 = side1;
        this -> side2 = side2;
        this -> side3 = side3;
    }

    void whichTriangle(){
        if ( side1 == side2 & side2 == side3 )
            cout << "Equilateral Triangle" <<endl;
        else if (side1 != side2 & side2 != side3 & side1 != side3)
            cout << "Scalene Triangle" <<endl;
        else
            cout << "Isosceles Triangle" <<endl;
    }

};

int main() {

    Triangle t1(5,5,5);
    t1.whichTriangle();
    return 0;
}
