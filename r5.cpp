#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Function to set the name
    void setName(string n) {
        name = n;
    }

    // Function to get the name
    string getName() {
        return name;
    }

    // Function to set the age
    void setAge(int a) {
        age = a;
    }

    // Function to get the age
    int getAge() {
        return age;
    }

    // Function to set the country
    void setCountry(string c) {
        country = c;
    }

    // Function to get the country
    string getCountry() {
        return country;
    }
};
int main() {
    Person myPerson;
    myPerson.setName("John wick");
    myPerson.setAge(40);
    myPerson.setCountry("USA");

    cout << "Name: " << myPerson.getName() << endl;
    cout << "Age: " << myPerson.getAge() << endl;
    cout << "Country: " << myPerson.getCountry() << endl;

    
}