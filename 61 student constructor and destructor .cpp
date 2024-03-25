#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(const string& n, int a) : name(n), age(a) {
        cout << "Constructor called for " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student student1("John Doe", 20);
    Student student2("Jane Smith", 22);
    student1.displayInfo();
    student2.displayInfo();

    return 0;
}
