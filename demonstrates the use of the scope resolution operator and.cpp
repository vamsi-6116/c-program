#include <iostream> 
using namespace std; 
// Global variable 
int value = 10; 
// Define a namespace 
namespace Alpha { 
    int value = 100; 
    void display() { 
        cout << "Inside Alpha namespace, value = " << value << endl; 
    } 
} 
namespace Beta { 
    int value = 200; 
    void display() {                    
        cout << "Inside Beta namespace, value = " << value << endl; 
    } 
} 
int main() { 
    // Local variable 
    int value = 500; 
    cout << "Local value = " << value << endl;          // Local variable 
    cout << "Global value = " << ::value << endl;       // Global variable using scope resolution operator 
    cout << "Alpha namespace value = " << Alpha::value << endl; 
    cout << "Beta namespace value = " << Beta::value << endl; 
    Alpha::display(); 
    Beta::display(); 
    return 0; 
} 
