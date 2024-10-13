// Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    string company, model;
    int year;

public:
    void setCompanyModelYear(string company, string model, int year){
        this->company = company;
        this->model = model;
        this->year = year;
    }

    string getCompany(){
        return company;
    }

    string getModel(){
        return model;
    }

    int getYear() {
        return year;
    }

};

int main() {

    Car c1, c2;

    c1.setCompanyModelYear("Omi Industry", "OmFC", 2025);
    c2.setCompanyModelYear("Omi Motors", "OmFCv2", 2027);

    cout << "The " << c1.getCompany() << " Company will launch " << c1.getModel() << "Model in " << c1.getYear() << endl;
    cout << "The " << c2.getCompany() << " Company will launch " << c2.getModel() << "Model in " << c2.getYear() << endl;

    return 0;
}
