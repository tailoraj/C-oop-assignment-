#include <iostream>
#include <string>
using namespace std;

class String {
    private:
        string str;
    public:
        String(string s) {
            str = s;
        }
        String operator+(String& s) {
            String result(str + s.str);
            return result;
        }
        void display() {
            cout << str << endl;
        }
};

int main() {
    String s1("Hello ");
    String s2("World");
    String s3 = s1 + s2;
    s3.display();
}