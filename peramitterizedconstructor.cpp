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
	//constructor -->parameterized constructor

	user(int val, int id, string pas)
	{
		age=age;
		userId=id;
		password=pas;
	}




	//rest function
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
	// user u0; //error bcz the way we call constructor is not like the way we define constructor here 
	// once you defined constructor inside class, compiler never call inbuilt constructor

	user u1(5,123,"abc");
	// cout<<u1.age()<<endl; //error bcz age is property not function
	cout<<u1.age<<endl;
	// cout<<u1.password<<endl; //error bcz private

	u1.getPassword(111);

}