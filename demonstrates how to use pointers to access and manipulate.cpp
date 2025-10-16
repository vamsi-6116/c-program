#include <iostream> 
#include<string> 
using namespace std;  
// Class definition 
class Student { 
private: 
string name; 
int marks; 
public: 
void setData(string n, int m) { 
name = n; 
marks = m; 
} 
void displayData() { 
 cout << "Student Name: " << name << endl; cout << "Marks: " << marks << endl; 
} 
}; 
int main() { 
// Pointer to class 
Student *ptr; 
// Dynamically allocate memory for an object 
ptr = new Student; 
// Access members through pointer 
ptr->setData("Abhi Ram Teja", 95); 
cout << "Accessing data via pointer to object:" << endl; 
ptr->displayData(); 
// Free allocated memory 
delete ptr; 
return 0;
}
