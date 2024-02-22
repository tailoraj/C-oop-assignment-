#include <iostream>
using namespace std;

class Shape {
public:
    virtual void inputData() = 0; // pure virtual function
};

class Rectangle : public Shape {
private:
    int length, width;
public:
    void inputData() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }
    void calculateArea() {
        int area = length * width;
        cout << "Area of rectangle: " << area << endl;
    }
};

int main() {
    Rectangle r;
    r.inputData();
    r.calculateArea();
    return 0;
}