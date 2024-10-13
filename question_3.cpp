// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    int age;
    string name, country;

public:
    void setAgeNameCountry(string name, string country, int age){
        this->age = age;
        this->name = name;
        this->country = country;
    }

    string getNameAndCountry(){
        return "Name : " + name + " " + "Country: " + country;
    }

    int getAge(){
        return age;
    }
};

int main() {

    Person p1, p2;
    p1.setAgeNameCountry("Onkar Nardekar", "India", 24);
    p2.setAgeNameCountry("Aakash Panda", "India", 24);

    cout << p1.getNameAndCountry() << " and age is " << p1.getAge() << endl;
    cout << p2.getNameAndCountry() << " and age is " << p2.getAge() << endl;

    return 0;
}
