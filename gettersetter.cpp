#include<iostream>
using namespace std;

class user
{
private:
	string password;
	int userId;
public:
	int age;

	//function
	void setAge(int val)
	{
		age=val;
	}

	void getUserId()
	{
		cout<<userId<<endl;
	}
	void setUserId(int val)
	{
		userId=val;
	}
	void setPassword(string val)
	{
		password=val;
	}

	void getPassword(int key)
	{
		if(key!=111)
		{
			cout<<"Not Authorized to get password"<<endl;
			return;
		}

		cout<<password<<endl;
	}
};

int main()
{
	user u0;

	//setUserId
	// u0.userId=123; error bcz userId is private property

	u0.setUserId(123);
	// cout<<u0.setUserId<<endl;//error bcz private
	u0.getUserId(); //123
	u0.setUserId(124);
	u0.getUserId(); //124
	// u0.password="abc";//error private
	u0.setPassword("abc");

	//to get Password
	// u0.password; //error bcz private
	u0.getPassword(123); //Not authorized
	u0.getPassword(111); //print password
 	
}