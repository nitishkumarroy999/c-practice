#include <iostream>

using namespace std;

void normalPrint(char *s)
{
	if(*s) {
		putchar(*s);
		normalPrint(s+1);
	}
}
void reversePrint(char *s)
{
	if(*s) {
		reversePrint(s+1);
		putchar(*s);
	}
}

int main() 
{
	char *str = "Normal or Reverse";
	normalPrint(str);
	cout << endl;
	reversePrint(str);
	cout << endl;
	return 0;
}