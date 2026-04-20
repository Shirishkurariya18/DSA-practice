#include<iostream>
#include<vector>
using namespace std;
int canCompleteCircuit(const vector<int>& gas, const vector<int>& cost) {
    int totalGas = 0, totalCost = 0;
    int currentGas = 0, startIndex = 0;

    for (size_t i = 0; i < gas.size(); ++i) {
        totalGas += gas[i];
        totalCost += cost[i];
        currentGas += gas[i] - cost[i];

        if (currentGas < 0) {
            startIndex = i + 1;
            currentGas = 0;
        }
    }

    return (totalGas >= totalCost) ? startIndex : -1;
}

int main() {
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    int startIndex = canCompleteCircuit(gas, cost);
    if (startIndex != -1) {
        cout << "Start at index: " << startIndex << endl;
    } else {
        cout << "No solution exists." << endl;
    }

    return 0;
}