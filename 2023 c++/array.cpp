#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter rows and column: ";
    cin >> n >> m;
    int A[n][m];
    cout << "\nEnter Elements of Array:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nElements are: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}