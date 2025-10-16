#include <iostream>
using namespace std;

// Single Inheritance
class Animal {
public:
    void eat() {
        cout << "Animal eats food." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

// Multiple Inheritance
class Engine {
public:
    void showEngine() {
        cout << "Engine: V8" << endl;
    }
};

class Wheels {
public:
    void showWheels() {
        cout << "Wheels: 4" << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void showCar() {
        cout << "This is a car." << endl;
    }
};

// Multilevel Inheritance
class Vehicle {
public:
    void type() {
        cout << "This is a vehicle." << endl;
    }
};

class FourWheeler : public Vehicle {
public:
    void wheels() {
        cout << "Has 4 wheels." << endl;
    }
};

class SUV : public FourWheeler {
public:
    void model() {
        cout << "Car model: SUV" << endl;
    }
};

// Hierarchical Inheritance
class Shape {
public:
    void draw() {
        cout << "Drawing shape." << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of circle = pr²" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of rectangle = l × b" << endl;
    }
};

// Hybrid Inheritance
class Student {
public:
    void details() {
        cout << "Student details." << endl;
    }
};

class Marks : public Student {
public:
    void showMarks() {
        cout << "Marks: 90" << endl;
    }
};

class Sports {
public:
    void showSportsScore() {
        cout << "Sports score: 8" << endl;
    }
};

class Result : public Marks, public Sports {
public:
    void displayResult() {
        cout << "Final Result Calculated." << endl;
    }
};

int main() {
    int choice;
    do {
        cout << "\n=== Inheritance Demonstration ===\n";
        cout << "1. Single Inheritance\n";
        cout << "2. Multiple Inheritance\n";
        cout << "3. Multilevel Inheritance\n";
        cout << "4. Hierarchical Inheritance\n";
        cout << "5. Hybrid Inheritance\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                Dog d;
                d.eat();
                d.bark();
                break;
            }
            case 2: {
                Car c;
                c.showEngine();
                c.showWheels();
                c.showCar();
                break;
            }
            case 3: {
                SUV s;
                s.type();
                s.wheels();
                s.model();
                break;
            }
            case 4: {
                Circle cir;
                Rectangle rec;
                cir.draw();
                cir.area();
                rec.draw();
                rec.area();
                break;
            }
            case 5: {
                Result r;
                r.details();
                r.showMarks();
                r.showSportsScore();
                r.displayResult();
                break;
            }
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}

