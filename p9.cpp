#include <iostream>
using namespace std;

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

class student : public person {
private:
    float percentage;
public:
    void setPercentage(float p) {
        percentage = p;
    }
    float getPercentage() {
        return percentage;
    }
    void inputData() {
        person::inputData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }
    void displayData() {
        person::displayData();
        cout << "Percentage: " << percentage << endl;
    }
};

class teacher : public person {
private:
    float salary;
public:
    void setSalary(float s) {
        salary = s;
    }
    float getSalary() {
        return salary;
    }
    void inputData() {
        person::inputData();
        cout << "Enter salary: ";
        cin >> salary;
    }
    void displayData() {
        person::displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    student s;
    teacher t;
    s.inputData();
    s.displayData();
    t.inputData();
    t.displayData();
    return 0;
}