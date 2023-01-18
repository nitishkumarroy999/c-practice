#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        int prices[N];
        for (int i = 0; i < N; i++) {
            cin >> prices[i];
        }
        sort(prices, prices + N);
        int total_cost = 0;
        for (int i = 0; i < N; i++) {
            total_cost += prices[i];
            if (i % (K + 1) == K) {
                i += K;
            }
        }
        cout << total_cost << endl;
    }
    return 0;
}
