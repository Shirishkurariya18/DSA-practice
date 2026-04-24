#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

// 👉 Divide string so each letter appears in only one part

vector<int> partitionLabels(string s) {
    unordered_map<char, int> lastIndexMap; // Map to store the last index of each character

    // First pass to fill the last index map
    for (int i = 0; i < s.length(); ++i) {
        lastIndexMap[s[i]] = i;
    }

    vector<int> partitions;
    int start = 0; // Start index of the current partition
    int end = 0;   // End index of the current partition

    // Second pass to determine partitions
    for (int i = 0; i < s.length(); ++i) {
        end = max(end, lastIndexMap[s[i]]); // Update the end index based on the last occurrence of the current character

        if (i == end) { // If we have reached the end of a partition
            partitions.push_back(end - start + 1); // Add the size of the partition to the result
            start = i + 1; // Move the start index to the next character
        }
    }

    return partitions;
}

int main() {
    string s = "ababcbacadefegdehijhklij";
    vector<int> result = partitionLabels(s);

    cout << "Partition sizes: ";
    for (int size : result) {
        cout << size << " ";
    }
    cout << endl; // Output: Partition sizes: 9 7 8

    return 0;
}