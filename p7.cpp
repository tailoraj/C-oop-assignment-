#include <iostream>
#include <algorithm>
using namespace std;
template <typename T>
void sortArray(T arr[], int n) {
    sort(arr, arr + n);
}

int main() {
    int arr1[] = {5, 3, 1, 4, 2};
    cout << "Before sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    sortArray(arr1, 5);
    cout << "After sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    double arr2[] = {5.2, 3.1, 1.5, 4.8, 2.9};
    cout << "Before sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    sortArray(arr2, 5);
    cout << "After sorting: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

}