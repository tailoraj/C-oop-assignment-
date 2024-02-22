#include <iostream>
using namespace std;
class Numbers {
    private:
        int num1, num2;

    public:
        Numbers(int n1, int n2) : num1(n1), num2(n2) {}

        // friend function declaration
        friend int findMax(Numbers);
};

// friend function definition
int findMax(Numbers num) {
    return (num.num1 > num.num2) ? num.num1 : num.num2;
}

int main() {
    Numbers numObj(50, 20);
    cout << "Max number is: " << findMax(numObj) << endl;
}