#include <iostream>
using namespace std;

class Matrix {
    private:
        int* arr;
        int size;
    public:
        Matrix(int s) {
            size = s;
            arr = new int[size];
        }
        void input() {
            for(int i = 0; i < size; i++) {
                cin >> arr[i];
            }
        }
        Matrix operator+(Matrix& m) {
            Matrix result(size);
            for(int i = 0; i < size; i++) {
                result.arr[i] = arr[i] + m.arr[i];
            }
            return result;
        }
        void display() {
            for(int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    Matrix m1(n);
    Matrix m2(n);
    cout << "Enter the elements of the first matrix: ";
    m1.input();
    cout << "Enter the elements of the second matrix: ";
    m2.input();
    Matrix sum = m1 + m2;
    cout << "The sum of the matrices is: ";
    sum.display();
  
}