#include <iostream>
using namespace std;
class Calculator {
public:
    float result;

    // Constructor for addition
    Calculator(float x, float y) {
        result = x + y;
    }

    // Constructor for subtraction
    Calculator(float x, float y, bool subtract) {
        if (subtract) {
            result = x - y;
        } else {
            result = x + y;
        }
    }

    // Constructor for division
    Calculator(float x, float y, bool divide) {
        if (divide && y != 0) {
            result = x / y;
        } else {
            result = x + y;
        }
    }

    // Constructor for multiplication
    Calculator(float x, float y, bool multiply) {
        if (multiply) {
            result = x * y;
        } else {
            result = x + y;
        }
    }
};

int main() {
    float val1, val2;

    cout << "Enter two values: ";
    cin >> val1 >> val2;

    Calculator add(val1, val2);
    Calculator subtract(val1, val2, true);
    Calculator divide(val1, val2, true);
    Calculator multiply(val1, val2, true);

    cout << "Addition value is: " << add.result << endl;
    cout << "Subtraction value is: " << subtract.result << endl;
    cout << "Division value is: " << divide.result << endl;
    cout << "Multiplication value is: " << multiply.result << endl;

 
}