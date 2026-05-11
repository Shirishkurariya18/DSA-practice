#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string str1 = "aaabbc";
    unordered_map<char, int> freq;

    for (char ch : str1) {
        freq[ch]++;
    }

    for (char ch : str1) {
        if (freq[ch] > 0) {
            cout << ch << freq[ch];
            freq[ch] = 0;
        }
    }

    cout << endl;
    return 0;
}