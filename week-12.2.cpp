#include <iostream>
#include <deque>
using namespace std;

// Correct template usage and iterator loop in displayDeque
void displayDeque(const deque<int> &dq) {
    cout << "Deque elements: ";
    for (deque<int>::const_iterator it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    deque<int> dq;
    cout << "--- INSERTION OPERATIONS ---" << endl;
    dq.push_back(10);    // Insert at back
    dq.push_back(20);
    dq.push_front(5);    // Insert at front
    dq.push_front(1);
    displayDeque(dq);

    cout << "--- DELETION OPERATIONS ---" << endl;
    dq.pop_front();      // Remove from front
    displayDeque(dq);
    dq.pop_back();       // Remove from back
    displayDeque(dq);

    cout << "--- ACCESS FRONT & BACK ---" << endl;
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    return 0;
}

