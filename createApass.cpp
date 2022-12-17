#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char pass[20], ePass[20];
    int numOne, numTwo, sum;
    cout<<"Create a password: ";
    cin>>pass;nitish
    cout<<"\nEnter the password to see the result: ";
    cin>>ePass;
    if(!strcmp(pass, ePass))
    {
        sum = numOne + numTwo;
        cout<<endl<<numOne<<" + "<<numTwo<<" = "<<sum;
    }
    else 
    cout<<"\nSorry! you v entered a wrong password! ";
    cout<<endl;
    return 0;
}

