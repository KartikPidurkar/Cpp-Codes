#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialization and input
    string s1, s2;
    cout << "Enter string 1: ";
    getline(cin, s1);
    cout << "Enter string 2: ";
    getline(cin, s2);

    // Length and size
    cout << "\nLength of s1: " << s1.length() << " (or " << s1.size() << ")" << endl;
    cout << "Length of s2: " << s2.length() << endl;

    // Access characters
    cout << "\nFirst char of s1: " << s1.at(0) << endl;
    if (!s1.empty()) {
        cout << "Last char of s1: " << s1.at(s1.length() - 1) << endl;
    }

    // Concatenation and append
    string combined = s1 + " " + s2;
    cout << "\nConcatenated: " << combined << endl;
    s1.append("!");  // Modifies s1
    cout << "s1 after append: " << s1 << endl;

    // Comparison
    if (s1 == s2) {
        cout << "s1 equals s2" << endl;
    } else if (s1 < s2) {
        cout << "s1 is lexicographically smaller" << endl;
    } else {
        cout << "s2 is lexicographically smaller" << endl;
    }

    // Find and search
    size_t pos = combined.find(s2);
    if (pos != string::npos) {
        cout << "\ns2 found in combined at position: " << pos << endl;
    } else {
        cout << "s2 not found" << endl;
    }

    // Substring
    if (combined.length() > 5) {
        string sub = combined.substr(0, 5);
        cout << "First 5 chars: " << sub << endl;
    }

    // Insert, replace, erase
    string modified = combined;
    modified.insert(5, "***");  // Insert at position 5
    cout << "After insert: " << modified << endl;

    modified.replace(0, 5, "START");  // Replace first 5 chars
    cout << "After replace: " << modified << endl;

    modified.erase(0, 5);  // Erase first 5 chars
    cout << "After erase: " << modified << endl;

    cout << "\nDemo complete!" << endl;
    return 0;
}
