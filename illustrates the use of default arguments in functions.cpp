#include <iostream> 
using namespace std; 
// Function with default arguments 
void greet(string name = "User", string greeting = "Welcome") { 
    cout << greeting << ", " << name << "!" << endl; 
} 
int main() { 
    greet();                            // Uses both default arguments 
    greet("Aditya");                    // Uses default greeting 
    greet("Laxman", "Hello");           // Uses both custom values 
    return 0; 
}
