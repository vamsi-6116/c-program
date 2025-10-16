#include <iostream>
using namespace std;

// Template class definition
template <typename T> 
class Pair {
private:
    T first;
    T second;

public:
    Pair(T a, T b) {
        first = a;
        second = b;
    }

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }

    T getMax() {
        return (first > second) ? first : second;
    }
};

int main() {
    // Pair of integers
    Pair<int> intPair(10, 20);
    intPair.display();
    cout << "Max: " << intPair.getMax() << endl << endl;

    // Pair of doubles
    Pair<double> doublePair(5.5, 2.3);
    doublePair.display();
    cout << "Max: " << doublePair.getMax() << endl << endl;

    // Pair of characters
    Pair<char> charPair('A', 'Z');
    charPair.display();
    cout << "Max: " << charPair.getMax() << endl;

    return 0;
}

