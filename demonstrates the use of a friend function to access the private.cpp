#include <iostream> 
using namespace std; 
class Box { 
private: 
    double length; 
public: 
    // Constructor 
    Box(double l) { 
        length = l; 
    } 
    // Declare friend function 
    friend void printLength(Box b); 
}; 
                   
// Definition of friend function 
void printLength(Box b) { 
    // Accessing private member of class 
    cout << "Length of the box: " << b.length << " units" << endl; 
} 
int main() { 
    Box b1(15.5); 
    // Call friend function 
    printLength(b1); 
    return 0; 
} 
