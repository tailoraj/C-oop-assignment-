#include <iostream>
using namespace std;

class cricketer {
protected:
    int totalRuns;
public:
    void inputData() {
        cout << "Enter total runs: ";
        cin >> totalRuns;
    }
};

class batsman : public cricketer {
private:
    int averageRuns, bestPerformance;
public:
    void inputData() {
        cricketer::inputData(); // call the base class function
        cout << "Enter average runs: ";
        cin >> averageRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }
    void calculateAverage() {
        averageRuns = totalRuns / 10; // implementation to calculate average runs
    }
    void displayData() {
        cout << "Total runs: " << totalRuns << endl;
        cout << "Average runs: " << averageRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    batsman b;
    b.inputData();
    b.calculateAverage();
    b.displayData();
    return 0;
}