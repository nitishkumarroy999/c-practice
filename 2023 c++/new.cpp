#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // print the first i numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // print the stars
        for (int j = 1; j <= n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
