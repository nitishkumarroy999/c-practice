#include <iostream>	
#include<vector>
using namespace std;

// function to generate random numbers in range [0-999] :
int randomize()
{
	return (rand() % 1000);
}

int main ()
{
// for different values each time we run the code
srand(time(NULL));
	
vector<int> vect(10); // declaring the vector

// Fill 6 elements from beginning using randomize()
generate_n(vect.begin(), 6, randomize);

// displaying the content of vector
for (int i=0; i<vect.size(); i++)
	cout << vect[i] << " " ;
	
return 0;
}