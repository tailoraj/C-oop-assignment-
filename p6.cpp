#include <iostream>
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    std::cout << "Before swapping: " << num1 << " " << num2 << std::endl;
    swap(num1, num2);
    std::cout << "After swapping: " << num1 << " " << num2 << std::endl;

    double d1 = 10.5, d2 = 20.5;
    std::cout << "Before swapping: " << d1 << " " << d2 << std::endl;
    swap(d1, d2);
    std::cout << "After swapping: " << d1 << " " << d2 << std::endl;

}