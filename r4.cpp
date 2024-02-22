#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    // Function to assign values to the length and width
    void assignDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Function to calculate the perimeter of the rectangle
    double calculatePerimeter() {
        return 2 * (length + width);
    }
};
int main() {
    Rectangle myRectangle;
    myRectangle.assignDimensions(5, 4);

    cout << "Area: " << myRectangle.calculateArea() << endl;
    cout << "Perimeter: " << myRectangle.calculatePerimeter() << endl;

    
}