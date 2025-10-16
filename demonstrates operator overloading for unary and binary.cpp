#include <iostream> 
using namespace std; 
class Number { 
private: 
int value; 
public: 
// Constructor 
Number(int v = 0) : value(v) {} 
// Display 
void display() const { 
cout << "Value: " << value << endl; 
} 
// Friend function for unary operator (-) 
friend Number operator-(const Number &n); 
// Unary 
 // Friend function for binary operator (+) 
friend Number operator+(const Number &n1, const Number &n2); 
}; 
// Unary operator overloading (Negation) 
Number operator-(const Number &n) { 
return Number(-n.value); 
} 
// Binary operator overloading (Addition) 
Number operator+(const Number &n1, const Number &n2) { 
return Number(n1.value + n2.value); 
} 
int main() { 
Number n1(10), n2(20), n3; 
cout << "Initial values:" << endl; 
n1.display(); 
n2.display(); 
cout << "\nUnary Operator Overloading (-n1):" << endl; 
n3 = -n1; // Negation using friend function 
n3.display(); 
cout << "\nBinary Operator Overloading (n1 + n2):" << endl; 
n3 = n1 + n2; // Addition using friend function 
n3.display(); 
return 0;} 
