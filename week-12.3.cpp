#include <iostream>
#include <map>
#include <string>
using namespace std;

void displayMap(const map<int, string> &m) {
    cout << "Map contents: \n";
    for (map<int, string>::const_iterator it = m.begin(); it != m.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }
}

int main() {
    map<int, string> studentMap;

    // INSERTION
    cout << "--- Insertion ---" << endl;
    studentMap.insert(make_pair(101, "Alice"));
    studentMap.insert(make_pair(102, "Bob"));
    studentMap[103] = "Charlie"; // another way to insert
    displayMap(studentMap);

    // ACCESS
    cout << "\n--- Access by Key ---" << endl;
    cout << "Student with roll 102: " << studentMap[102] << endl;

    // SEARCH
    cout << "\n--- Searching ---" << endl;
    int searchKey = 103;
    map<int, string>::iterator it = studentMap.find(searchKey);
    if (it != studentMap.end()) {
        cout << "Found: Key = " << it->first << ", Value = " << it->second << endl;
    } else {
        cout << "Key " << searchKey << " not found." << endl;
    }

    // DELETION
    cout << "\n--- Deletion ---" << endl;
    studentMap.erase(102); // delete key 102
    displayMap(studentMap);

    return 0;
}

