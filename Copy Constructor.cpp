#include <iostream> 
#include <string> 
using namespace std; 
class Book { 
private: 
string title; 
int pages; 
public: 
// Parameterized constructor 
Book(string t, int p) { 
title = t; 
pages = p; 
cout << "Parameterized constructor called." << endl; 

} 
// Copy constructor 
Book(const Book &b) { 
title = b.title; 
pages = b.pages; 

 cout << "Copy constructor called." << endl; 
} 
// Display function 
void display() { 
cout << "Title: " << title << ", Pages: " << pages << endl; 
} 
}; 
int main() { 
Book book1("C++ Programming", 350); // Calls parameterized constructor 
book1.display(); 
Book book2 = book1; // Calls copy constructor 
book2.display(); 
return 0; 
} 
