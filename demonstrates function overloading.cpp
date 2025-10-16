#include <iostream> 
using namespace std; 
// Function to add two integers 
int add(int a, int b) { 
    return a + b; 
} 
// Function to add two floats 
float add(float a, float b) { 
    return a + b; 
} 
// Function to add three integers 
int add(int a, int b, int c) { 
    return a + b + c; 
} 
int main() { 
    cout << "Add two integers (5 + 3): " << add(5, 3) << endl; 
    cout << "Add two floats (4.5 + 2.3): " << add(4.5f, 2.3f) << endl; 
    cout << "Add three integers (1 + 2 + 3): " << add(1, 2, 3) << endl; 
    return 0; 
}
