#include <iostream>
// #include <cmath>
using namespace std;

class Area {
    private:
        float Area,pi=3.14;
    public:
        void input(float a) {
            Area = a;
        }
        void input(float a, float b) {
            Area = a*b;
        }
        void calculateArea(float a) {
            Area = pi * a * a;
            cout << "Area of circle: " << Area << endl;
        }
        void calculateArea(float a, float b) {
            Area = a * b;
            cout << "Area of rectangle: " << Area << endl;
        }
        void calculateArea(float a, float b, float h) {
            Area = 0.5 * a * b * h;
            cout << "Area of triangle: " << Area << endl;
        }
};

int main() {
    Area a;
    float r, l, b, h;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    a.input(r);
    a.calculateArea(r);
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> l >> b;
    a.input(l, b);
    a.calculateArea(l, b);
    cout << "Enter the base and height of the triangle: ";
    cin >> b >> h;
    a.input(b, h);
    a.calculateArea(b, h);
    
}