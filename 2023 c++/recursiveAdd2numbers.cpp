#include <iostream>
int sum(int a, int b) {
  if (b != 1) {
    sum(a, b - 1);   
  }
  a = a + 1;
  return a;   
}

int main() {
  int a = sum(10, 12);
  std::cout << a;    
}
