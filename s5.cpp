#include <iostream>
#include <cmath>
using namespace std;
class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor
    Triangle(double side1, double side2, double side3) {
        this->side1 = side1;
        this->side2 = side2;
        this->side3 = side3;
    }

    // Function to determine if the triangle is equilateral
    bool isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to determine if the triangle is isosceles
    bool isIsosceles() {
        return (side1 == side2 || side2 == side3 || side1 == side3);
    }

    // Function to determine if the triangle is scalene
    bool isScalene() {
        return (side1 != side2 && side2 != side3 && side1 != side3);
    }
};

int main() {
    Triangle triangle1(3.0, 3.0, 3.0);
    Triangle triangle2(3.0, 3.0, 4.0);
    Triangle triangle3(3.0, 4.0, 5.0);

    if (triangle1.isEquilateral()) {
        cout << "Triangle 1 is equilateral" << endl;
    } else if (triangle1.isIsosceles()) {
        cout << "Triangle 1 is isosceles" << endl;
    } else {
        cout << "Triangle 1 is scalene" << endl;
    }

    if (triangle2.isEquilateral()) {
        cout << "Triangle 2 is equilateral" << endl;
    } else if (triangle2.isIsosceles()) {
        cout << "Triangle 2 is isosceles" << endl;
    } else {
        cout << "Triangle 2 is scalene" << endl;
    }

    if (triangle3.isEquilateral()) {
        cout << "Triangle 3 is equilateral" << endl;
    } else if (triangle3.isIsosceles()) {
        cout << "Triangle 3 is isosceles" << endl;
    } else {
        cout << "Triangle 3 is scalene" << endl;
    }

}