#include <iostream> 
using namespace std; 
class Employee { 
private: 
    int id; 
    string name; 
public: 
    // Setter using 'this' pointer to resolve name conflict 
    void setDetails(int id, string name) { 
        this->id = id;       // this->id refers to member variable 
        this->name = name;   // name is parameter 
    } 
    // Display function 
    void display() { 
        cout << "Employee ID: " << this->id << endl; 
        cout << "Employee Name: " << this->name << endl; 
    } 
}; 
int main() { 
    Employee emp1; 
    emp1.setDetails(101, "Laxman"); 
    emp1.display(); 
    return 0; 
} 
