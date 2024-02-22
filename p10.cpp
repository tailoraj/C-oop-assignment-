#include <iostream>
using namespace std;

class Marks {
protected:
    float marks1, marks2, marks3;
public:
    void inputMarks() {
        cout << "Enter marks 1: ";
        cin >> marks1;
        cout << "Enter marks 2: ";
        cin >> marks2;
        cout << "Enter marks 3: ";
        cin >> marks3;
    }
    void calculateTotal() {
        float total = marks1 + marks2 + marks3;
        cout << "Total marks: " << total << endl;
    }
    void calculatePercentage() {
        float percentage = (marks1 + marks2 + marks3) / 3;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class person {
protected:
    string name;
    int age;
public:
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
    void setAge(int a) {
        age = a;
    }
    int getAge() {
        return age;
    }
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public person, public Marks {
public:
    void inputData() {
        person::inputData();
        Marks::inputMarks();
    }
    void displayData() {
        person::displayData();
        Marks::calculateTotal();
        Marks::calculatePercentage();
    }
};

int main() {
    student s;
    s.inputData();
    s.displayData();
   
}