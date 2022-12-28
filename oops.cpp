#include<iostream>
using namespace std;

int main()
{
	user u0; //static object creation
	cout<<u0.age<<endl; //garbage
	cout<<u0.name<<endl; //empty
	// cout<<u0.password<<endl; error bcz, password is private property

	//dynamic object creation
	user *u1=new user;
	(*u1).name="Adarsh";
	// u1->name="Adarsh"; alternatively
	u1->age=20;
	u1->userId=123;

	cout<<u1->name<<" "<<u1->age<<" "<<(*u1).userId<<endl;
	//set Age of u1
	u1->setAge(21);
	cout<<u1->age<<endl;

	// user u5(5);//error bcz no constructor defined by you, so compiler called inbuilt constructo
					// and inbuilt constructor has no arguments.

}