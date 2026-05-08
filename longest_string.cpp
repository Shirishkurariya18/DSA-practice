#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    
    cout << "Enter second string: ";
    getline(cin, str2);
    
    cout << "\nString 1: " << str1 << " (Length: " << str1.length() << ")" << endl;
    cout << "String 2: " << str2 << " (Length: " << str2.length() << ")" << endl;
    
    if (str1.length() > str2.length()) {
        cout << "\nString 1 is longer" << endl;
    } else if (str2.length() > str1.length()) {
        cout << "\nString 2 is longer" << endl;
    } else {
        cout << "\nBoth strings have equal length" << endl;
    }
    
    return 0;
}
