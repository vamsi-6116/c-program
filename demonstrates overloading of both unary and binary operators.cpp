#include <iostream>
 using namespace std;
 class Number { 
private:
 int value; 
public:
 //Constructor
 Number(int v = 0) : value(v) {}
 //Display
 void display() { 
cout << "Value: " << value << endl; 
} 
 // Unary operator overloading (++ as example) 
Number operator++() { // Pre-increment 
++value; 
return *this; 
} 
// Binary operator overloading (+ as example) 
Number operator+(const Number &obj) { 
Number temp; 
temp.value = this->value + obj.value; 
return temp; 
} 
}; 
int main() { 
Number n1(5), n2(10), n3; 
cout << "Initial values:" << endl; 
n1.display(); 
n2.display(); 
cout << "\nUnary Operator Overloading (Pre-increment n1):" << endl; 
++n1; 
n1.display(); 
cout << "\nBinary Operator Overloading (n1 + n2):" << endl; 
n3 = n1 + n2; 
n3.display(); 
return 0; 
}
