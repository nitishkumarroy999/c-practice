#include <iostream>

using namespace std;

int factorial(int n)
{
	if(n == 0 || n == 1) return 1;

	return n * factorial(n-1);
}

int factorial_iter(int n)
{
	int fact = 1;
	for(int i = n; i > 1; i--) {
		fact *= i;
	}
	return fact;
}

int f[100] = {0};

int factorial_dynamic(int n)
{
	if(f[n]) return f[n];
	if(n == 0 || n == 1) {
		f[n] = 1;
		return f[n];
	}	
	f[n] = n*factorial(n-1);
	return f[n];
}

int main()
{
	cout << "recursive factorial 10! = " 
			<< factorial(10) << endl;
	cout << "iterative factorial 10! = " 
			<< factorial_iter(10) << endl;
}