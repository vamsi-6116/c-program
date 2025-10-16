 #include<iostream>
 using namespace std;
 // Template function to find maximum
 template <typename T>
 T getMax(T a, T b) {
 return (a > b) ? a : b; 
}
 int main() { 
cout << "Max of 10 and 20 (int): " << getMax(10, 20) << endl;
 cout << "Max of 5.5 and 2.3 (double): " << getMax(5.5, 2.3) << endl;
 cout << "Max of 'A' and 'Z' (char): " << getMax('A', 'Z') << endl;
 return 0;
 }
