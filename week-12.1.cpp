#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Traditional iterator loop for vector
void displayVector(const vector<int> &v) {
    cout << "Vector elements: ";
    for (vector<int>::const_iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

// Traditional iterator loop for list
void displayList(const list<int> &l) {
    cout << "List elements: ";
    for (list<int>::const_iterator it = l.begin(); it != l.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    // VECTOR DEMO
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << "--- VECTOR OPERATIONS ---" << endl;
    displayVector(vec);

    // Deleting second element (index 1)
    vec.erase(vec.begin() + 1);
    cout << "After deletion: ";
    displayVector(vec);

    // LIST DEMO
    list<int> lst;
    lst.push_back(100);
    lst.push_back(200);
    lst.push_back(300);

    cout << "\n--- LIST OPERATIONS ---" << endl;
    displayList(lst);

    // Deleting element with value 200
    lst.remove(200);
    cout << "After deletion: ";
    displayList(lst);

    return 0;
}

