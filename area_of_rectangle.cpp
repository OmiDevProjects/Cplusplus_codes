#include<iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }

    float areaOfRectangle(){
        return length * width;
    }

    float perimeteOfRectangle(){
        return ( length + width ) * 2;
    }

};

int main() {

    float length, width;

    cout << "Enter the length of rectangle: ";
    cin >> length;

    cout <<"\nEnter the width of rectangle: ";
    cin >> width;

    Rectangle r1(length, width);
    cout << "Area of rectangle: " << r1.areaOfRectangle() <<endl;
    cout << "Perimeter of rectangle: " << r1.perimeteOfRectangle() <<endl;

    return 0;
}
