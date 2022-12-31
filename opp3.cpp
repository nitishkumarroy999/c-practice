#include<iostream>
using namespace std;

class user
{
public:
	int id,age;
	string password;

	//constructor
	// 1.
	user(int id, int age, string password)
	{
		(*this).id=id; //less preferable
		this->age=age; //more preferable bcz of synatactical sugar
		this->password=password;
	}
	// 2.
	user()
	{

	}
	// 3.
	user(int id)
	{
		this->id=id;
	}
	//if copy constructor is not defined by us then compiler called inbuilt copy constructor
	// defined default copy constructor by us
	user(user &obj)
	{
		this->id=obj.id;
		this->age=obj.age;
		this->password=obj.password;

		cout<<"use defined copy constructor by us instead of inbuilt"<<endl;
	}

	void display()
	{
		cout<<this->id<<" "<<this->age<<" "<<this->password<<endl;
	}
};


int main()
{
	user u0(111,20,"abc");
	u0.display();
	user u1(u0);
	u1.display();

	user u2(222,21,"ABC");
	u2.display();
	//Now I want to copy u2 to u1;
	// user u1(u2); error bcz u1 is initialized already in this scope

	//use assignment operator(=)
	u1=u2;
	u1.display();

	user u3;
	u3=u0;
	u3.display();

	//dynamically
	user *Nitishkumarroy=new user(u3); //copy constructor
	Nitishkumarroy->display(); 
	(*Nitishkumarroy)=u2;
	Nitishkumarroy->display();
}