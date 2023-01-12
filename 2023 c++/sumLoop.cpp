#include<iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number:" << endl;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum N no. is " << sum << endl;
    return 0;
}