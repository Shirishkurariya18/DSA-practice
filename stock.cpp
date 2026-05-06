#include <bits/stdc++.h>
using namespace std;

long long maxProfit(const vector<long long>& prices) {
    long long profit = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Enter number of days: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Invalid input\n";
        return 0;
    }

    vector<long long> prices(n);
    cout << "Enter stock prices for " << n << " days:\n";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    long long totalProfit = maxProfit(prices);
    cout << "Maximum profit with multiple transactions: " << totalProfit << "\n";
    return 0;
}
