#include <iostream>
using namespace std; 
int main()
{
    int n, m;
    cout << "Enter rows and column of Matrices: ";
    cin >> n >> m;
    int A[n][m], B[n][m], C[n][m];

    cout << "\nEnter Elements of 1st Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin >> A[i][j];
        }
    }
    cout << "\nEnter Elements of 2nd Matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin >> B[i][j];
        }
    }
    cout << "\nSum of both the matrics: \n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}