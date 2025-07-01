#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>
using namespace std;

bool wordPattern(string pattern, string s) {
    unordered_map<char, string> charToWord;
    unordered_map<string, char> wordToChar;
    stringstream ss(s);
    string word;
    vector<string> words;

    // Split the string `s` into words
    while (ss >> word) words.push_back(word);

    if (words.size() != pattern.size()) return false;

    for (int i = 0; i < pattern.size(); ++i) {
        char c = pattern[i];
        string w = words[i];

        if (charToWord.count(c) && charToWord[c] != w)
            return false;
        if (wordToChar.count(w) && wordToChar[w] != c)
            return false;

        charToWord[c] = w;
        wordToChar[w] = c;
    }

    return true;
}
int main() {
    string pattern = "abba";
    string s = "dog cat cat dog";

    if (wordPattern(pattern, s)) {
        cout << "The string follows the pattern." << endl;
    } else {
        cout << "The string does not follow the pattern." << endl;
    }

    return 0;
}