#include <iostream> 
using namespace std; 
// Inline function to calculate square 
inline int square(int x) { 
    return x * x; 
} 
// Inline function to find maximum of two numbers 
inline int max(int a, int b) { 
    return (a > b) ? a : b; 
} 
int main() { 
    int num1 = 5, num2 = 8; 
    cout << "Square of " << num1 << " is: " << square(num1) << endl; 
    cout << "Square of " << num2 << " is: " << square(num2) << endl; 
    cout << "Maximum of " << num1 << " and " << num2 << " is: " << max(num1, num2) << endl; 
    return 0; 
} 

