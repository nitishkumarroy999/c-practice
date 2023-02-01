#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    srand(time(0));
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // generates a random number between 0 and 99
    }
    
    cout << "Random Array: [ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    
    return 0;
}
