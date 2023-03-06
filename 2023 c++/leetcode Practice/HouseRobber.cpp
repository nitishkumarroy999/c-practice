#include <iostream>
using namespace std;

// calculate the maximum stolen value
int maxLoot(int* hval, int n)
{
	// base case
	if (n < 0) {
		return 0;
	}

	if (n == 0) {
		return hval[0];
	}
	// if current element is pick then previous cannot be
	// picked
	int pick = hval[n] + maxLoot(hval, n - 2);
	// if current element is not picked then previous
	// element is picked
	int notPick = maxLoot(hval, n - 1);

	// return max of picked and not picked
	return max(pick, notPick);
}

// Driver to test above code
int main()
{
	int hval[] = { 6, 7, 1, 3, 8, 2, 4 };
	int n = sizeof(hval) / sizeof(hval[0]);
	cout << "Maximum loot possible : "
		<< maxLoot(hval, n - 1);
	return 0;
}


