#include <iostream>
#include <string>
using namespace std;

int main() {
  int number = 0;
  string result;

  // nested ternary operator to find whether
  // number is positive, negative, or zero
  result = (number == 0) ? "Zero" : ((number > 0) ? "Positive" : "Negative");

  cout << "Number is " << result;

  return 0;
}