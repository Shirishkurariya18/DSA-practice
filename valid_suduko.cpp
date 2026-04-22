#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

// Valid Sudoku
bool isValidSudoku(const vector<vector<char>>& board) {
    unordered_map<string, vector<char>> rows;
    unordered_map<string, vector<char>> cols;
    unordered_map<string, vector<char>> boxes;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char num = board[i][j];
            if (num != '.') {
                string rowKey = "row" + to_string(i);
                string colKey = "col" + to_string(j);
                string boxKey = "box" + to_string(i / 3) + to_string(j / 3);

                if (find(rows[rowKey].begin(), rows[rowKey].end(), num) != rows[rowKey].end() ||
                    find(cols[colKey].begin(), cols[colKey].end(), num) != cols[colKey].end() ||
                    find(boxes[boxKey].begin(), boxes[boxKey].end(), num) != boxes[boxKey].end()) {
                    return false; // Duplicate found
                }

                rows[rowKey].push_back(num);
                cols[colKey].push_back(num);
                boxes[boxKey].push_back(num);
            }
        }
    }

    return true; // No duplicates found
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '8', '8', '6', '3', '.', '.', '1'}, // Invalid row
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    if (isValidSudoku(board)) {
        cout << "The Sudoku board is valid." << endl;
    } else {
        cout << "The Sudoku board is invalid." << endl;
    }

    return 0;
}