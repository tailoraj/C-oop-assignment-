#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error : Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Error : Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    int a = 5, b = 3;
    double x = 5.5, y = 3.3;
    cout << "Addition: " << endl;
    cout << "Int: " << add(a, b) << endl;
    cout << "Double: " << add(x, y) << endl;
    cout << "Subtraction: " << endl;
    cout << "Int: " << subtract(a, b) << endl;
    cout << "Double: " << subtract(x, y) << endl;
    cout << "Multiplication: " << endl;
    cout << "Int: " << multiply(a, b) << endl;
    cout << "Double: " << multiply(x, y) << endl;
    cout << "Division: " << endl;
    cout << "Int: " << divide(a, b) << endl;
    cout << "Double: " << divide(x, y) << endl;
}