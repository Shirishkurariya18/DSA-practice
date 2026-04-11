#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main() {
    string str = "I love coding";
    int n = str.length();
    // Input: "I love coding"    output : "coding love I"

    // Split the string into words
    stringstream ss(str);
    vector<string> words;
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse the order of words
    reverse(words.begin(), words.end());

    // Join the words back into a string
    string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0) result += " ";
        result += words[i];
    }

    // Output the result
    cout << result << endl;

    return 0;
}