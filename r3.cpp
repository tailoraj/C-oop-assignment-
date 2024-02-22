#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    float pi=3.14;

public:
    // Function to assign value to the radius
    void assignRadius(double r) {
        radius = r;
    }

    // Function to calculate the area of the circle
    double calculateArea() {
        return pi * radius * radius;
    }

    // Function to calculate the circumference of the circle
    double calculateCircumference() {
        return 2 * pi * radius;
    }
};
int main() {
    Circle myCircle;
    myCircle.assignRadius(5);

    cout << "Area: " << myCircle.calculateArea() << endl;
    cout << "Circumference: " << myCircle.calculateCircumference() << endl;

    
}