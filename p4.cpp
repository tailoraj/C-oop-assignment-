#include <iostream>
using namespace std;

class Numbers {
    public:
        int num1, num2;
    public:
        void input() {
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
        }
        void swap() {
            num1 = num1 + num2;
            num2 = num1 - num2;
            num1 = num1 - num2;
        }
        void display() {
            cout << "The first number is: " << num1 << endl;
            cout << "The second number is: " << num2 << endl;
        }
};

void swap(Numbers& n) {
    n.num1 = n.num1 + n.num2;
    n.num2 = n.num1 - n.num2;
    n.num1 = n.num1 - n.num2;
}

int main() {
    Numbers n;
    n.input();
    swap(n);
    n.display();
}