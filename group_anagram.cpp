#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Group Anagrams
vector<vector<string>> groupAnagrams(const vector<string>& strs) {
    unordered_map<string, vector<string>> anagramMap;

    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        anagramMap[sortedStr].push_back(str);
    }

    vector<vector<string>> result;
    for (const auto& pair : anagramMap) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> groupedAnagrams = groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : groupedAnagrams) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}