#include <iostream>
#include <string>
using namespace std;
class Address {
private:
    string street;
    string city;
    string state;
    int zip;

public:
    Address(string street, string city, string state, int zip) {
        this->street = street;
        this->city = city;
        this->state = state;
        this->zip = zip;
    }

    string getStreet() {
        return street;
    }

    string getCity() {
        return city;
    }

    string getState() {
        return state;
    }

    int getZip() {
        return zip;
    }
};

class Student {
private:
    string name;
    string clazz;
    int rollNumber;
    int marks;
    Address address;

public:
    Student(string name, string clazz, int rollNumber, int marks, string street, string city, string state, int zip)
        : name(name), clazz(clazz), rollNumber(rollNumber), marks(marks), address(street, city, state, zip) {}

    char calculateGrade() {
        if (marks >= 90 && marks <= 100) {
            return 'A';
        } else if (marks >= 80 && marks < 90) {
            return 'B';
        } else if (marks >= 70 && marks < 80) {
            return 'C';
        } else if (marks >= 60 && marks < 70) {
            return 'D';
        } else {
            return 'F';
        }
    }

    void displayStudentInfo() {
        cout << "Name: " << name << endl;
        cout << "Class: " << clazz << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << calculateGrade() <<endl;
        cout << "Address: " << address.getStreet() << ", " << address.getCity() << ", " << address.getState() << " " << address.getZip() <<endl;
    }
};

int main() {
    Student student1("Johnny depp", "10th", 123, 95, "123 Main St", "Anytown", "CA", 12345);
    student1.displayStudentInfo();

    return 0;
}