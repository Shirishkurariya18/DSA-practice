#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (N == 1) {
            cout << "NO" << endl;
            continue;
        }

        long long sum = 1;

        for (long long i = 2; i  < N; i++) {
            if (N % i == 0) {
                sum += i;

            //     if (i != N / i)
            //         sum += N / i;
            }
        }

        cout << (sum == N ? "YES" : "NO") << endl;
    }

    return 0;
}