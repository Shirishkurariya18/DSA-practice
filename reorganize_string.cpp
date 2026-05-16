#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

string reorganizeString(string s) {
    unordered_map<char, int> freq;
    for (char c : s) freq[c]++;

    char maxChar = 0;
    int maxFreq = 0;
    for (const auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxChar = pair.first;
        }
    }

    if (maxFreq > (s.size() + 1) / 2) return ""; // Not possible to reorganize

    string result(s.size(), ' ');
    int idx = 0;

    // Place the most frequent character first
    while (freq[maxChar] > 0) {
        result[idx] = maxChar;
        idx += 2;
        freq[maxChar]--;
    }

    // Place the remaining characters
    for (const auto& pair : freq) {
        while (pair.second > 0) {
            if (idx >= s.size()) idx = 1; // Switch to odd index after filling even
            result[idx] = pair.first;
            idx += 2;
            freq[pair.first]--;
        }
    }

    return result;
}

int main() {
    string s = "aab";
    string result = reorganizeString(s);
    if (result.empty()) {
        cout << "Cannot reorganize the string." << endl;
    } else {
        cout << "Reorganized string: " << result << endl;
    }
    return 0;
}