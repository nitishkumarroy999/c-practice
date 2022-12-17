#include<iostream>
using namespace std;
int main() 
{ 
    int x = 69;
    int *ip;
    ip = &x;
    cout<< "Value of x is : ";
    cout<< x << endl;
    cout<< "Value of ip is : ";
    cout<< ip<< endl;
    cout<< "Value of ip is : ";
    cout<< *ip << endl;

    return 0;

}