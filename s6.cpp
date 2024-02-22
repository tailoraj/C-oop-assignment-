#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string name, int employeeID, double salary) {
        this->name = name;
        this->employeeID = employeeID;
        this->salary = salary;
    }

    // Function to get the name
    string getName() {
        return name;
    }

    // Function to get the employee ID
    int getEmployeeID() {
        return employeeID;
    }

    // Function to get the salary
    double getSalary() {
        return salary;
    }

    // Function to set the salary based on employee performance
    void setSalary(double performance) {
        if (performance >= 90) {
            salary = salary * 1.1;
        } else if (performance >= 80) {
            salary = salary * 1.05;
        } else if (performance >= 70) {
            salary = salary * 1.02;
        } else {
            salary = salary * 1;
        }
    }
};

int main() {
    Employee employee1("Johnny depp", 12345, 50000);

    cout << "Employee 1's name: " << employee1.getName() << endl;
    cout << "Employee 1's employee ID: " << employee1.getEmployeeID() << endl;
    cout << "Employee 1's salary before performance review: $" << employee1.getSalary() << endl;

    employee1.setSalary(95);

    cout << "Employee 1's salary after performance review: $" << employee1.getSalary() << endl;

    
}