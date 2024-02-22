#include <iostream>
#include <string>
using namespace std;
class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // Function to get the day
    int getDay() {
        return day;
    }

    // Function to get the month
    int getMonth() {
        return month;
    }

    // Function to get the year
    int getYear() {
        return year;
    }

    // Function to set the day
    void setDay(int day) {
        this->day = day;
    }

    // Function to set the month
    void setMonth(int month) {
        this->month = month;
    }

    // Function to set the year
    void setYear(int year) {
        this->year = year;
    }

    // Function to validate if the date is valid
    bool isValid() {
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
            return false;
        }

        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            daysInMonth[1] = 29;
        }

        return day <= daysInMonth[month - 1];
    }
};

int main() {
    Date date1(31, 12, 2022);
    Date date2(30, 2, 2022);

    if (date1.isValid()) {
        cout << "Date 1 is valid" << endl;
    } else {
        cout << "Date 1 is not valid" << endl;
    }

    if (date2.isValid()) {
        cout << "Date 2 is valid" << endl;
    } else {
        cout << "Date 2 is not valid" << endl;
    }

    return 0;
}