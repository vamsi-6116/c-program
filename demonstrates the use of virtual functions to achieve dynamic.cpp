#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

// Derived Class 1 (virtual base class)
class Student : virtual public Person {
protected:
    int rollNo;
public:
    void setRollNo(int r) {
        rollNo = r;
    }
    void displayRollNo() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

// Derived Class 2 (virtual base class)
class Employee : virtual public Person {
protected:
    int empID;
public:
    void setEmpID(int e) {
        empID = e;
    }
    void displayEmpID() {
        cout << "Employee ID: " << empID << endl;
    }
};

// Final Derived Class
class Manager : public Student, public Employee {
public:
    void displayDetails() {
        displayName();
        displayRollNo();
        displayEmpID();
    }
};

int main() {
    Manager m;

    // Set values (no ambiguity due to virtual base)
    m.setName("Abhi Ram Teja");
    m.setRollNo(101);
    m.setEmpID(5001);

    cout << "Manager Details:" << endl;
    m.displayDetails();

    return 0;
}

