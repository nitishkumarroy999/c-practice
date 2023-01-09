// Base class
#include<iostream>
using namespace std;
class Vehicle {
  public:
    string brand = "Ford";
    void hook() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.hook();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}