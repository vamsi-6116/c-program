 #include<iostream>
 using namespace std;
 // Base class 
class Animal { 
public:
 virtual void speak() { // Virtual function
 cout << "Animal makes a sound." << endl; 
}
 };
// Derived class 1 
class Dog : public Animal { 
public: 
 void speak() override { // Override base method 
cout << "Dog barks." << endl; 
} 
}; 
// Derived class 2 
class Cat : public Animal { 
public: 
void speak() override { // Override base method 
cout << "Cat meows." << endl; 
} 
}; 
int main() { 
Animal* animalPtr; // Base class pointer 
Dog d; 
Cat c; 
// Pointing to Dog object 
animalPtr = &d; 
animalPtr->speak(); // Calls Dog's speak() at runtime 
// Pointing to Cat object 
animalPtr = &c; 
animalPtr->speak(); // Calls Cat's speak() at runtime 
return 0; } 
