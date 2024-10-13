#include<iostream>
using namespace std;

class Circle {
private:
    int radius;
    float pie = 3.14;

public:
    Circle(int radius){
        this->radius = radius;
    }

    float areaOfCircle(){
        return pie * (radius * radius);
    }

    float circumferenceOfCircle(){
        return 2 * pie * radius;
    }
};

int main() {

    int radius;

    cout << "Enter the radius of circle: ";
    cin >> radius;

    Circle c1(radius);
    cout << "Area of Circle is " << c1.areaOfCircle() << endl;
    cout << "Circumference of Circle is " << c1.circumferenceOfCircle() << endl;

    return 0;
}
