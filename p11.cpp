#include <iostream>
using namespace std;

class Students {
protected:
    int rollNumber;
public:
    void setRollNumber(int r) {
        rollNumber = r;
    }
    int getRollNumber() {
        return rollNumber;
    }
};

class Test : public Students {
private:
    int sub1, sub2;
public:
    void inputTestMarks() {
        cout << "Enter marks for subject 1: ";
        cin >> sub1;
        cout << "Enter marks for subject 2: ";
        cin >> sub2;
    }
    int getSub1() {
        return sub1;
    }
    int getSub2() {
        return sub2;
    }
};

class Result : public Test {
private:
    int totalMarks;
public:
    void calculateTotal() {
        totalMarks = getSub1() + getSub2();
        cout << "Total marks obtained: " << totalMarks << endl;
    }
};

int main() {
    Result r;
    r.setRollNumber(1);
    r.inputTestMarks();
    r.calculateTotal();
   
}