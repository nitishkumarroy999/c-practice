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
	//constructor -->defined constructor, same as inbuilt default constructor
	user()
	{
		cout<<"called defined default constructor"<<endl;
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
	user u0;
	u0.age=20;
	cout<<u0.age<<endl;

}