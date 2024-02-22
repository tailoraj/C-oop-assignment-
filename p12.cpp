#include <iostream>
using namespace std;

class Base {
private:
    int privateMember;
protected:
    int protectedMember;
public:
    int publicMember;
    void setPrivateMember(int a) {
        privateMember = a;
    }
    int getPrivateMember() {
        return privateMember;
    }
};

class Derived : public Base {
public:
    void accessMembers() {
        // accessing protected member
        protectedMember = 20;
        cout << "Protected member: " << protectedMember << endl;

        // accessing public member
        publicMember = 30;
        cout << "Public member: " << publicMember << endl;
    }
};

int main() {
    Derived d;
    d.accessMembers();
}