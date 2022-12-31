#include<iostream>
using namespace std;
//Nkr codes

//All bydefault copying techniques follow shallow copy

class user
{
public:
	int id;
	string password;
	char *name;

	//constructor
	user()
	{

	}
	user(int id, string password, char *name)
	{
		this->id=id;
		this->password=password;
		// this->name=name; //shallow copy
		//we do deep copy
		int len=strlen(name)+1; //+1 for '\0' 
		char *newName=new char[len]; 
		for(int i=0;i<len;i++)
		{
			newName[i]=name[i];
		}
		this->name=newName;
		cout<<"called defined constructor"<<endl;
	}

	void display()
	{
		cout<<id<<" "<<password<<" "<<name<<endl;
	}


	//distructor
	~user()
	{
		delete []name;
	}
};

int main()
{
	// int id=111;
	// string password="abc";
	// char name[]="adarsh";

	// user u0(id,password,name);
	// u0.display(); //111 abc adarsh
	// id=222;
	// password[0]='A';
	// name[0]='A';
	// u0.display(); // 111 abc adarsh

	//inbuilt copy constructor
	int id1=111;
	string password1="abc";
	char name1[]="Nitishkumarroy";

	user u2(id1,password1,name1);
	user u3(u2); //copy constructor ==> shallow copy
	//Assignment operator copy==>shallow copy
	user u4;
	u4=u2;
	// u2.display();
	// u3.display();
	// u4.display();

	name1[0]='A';
	u2.display();
	u3.display();
	u4.display();

	//if we update name of u2, it will reflect to u3 and u4 too
	u2.name[0]='B';
	u2.display();
	u3.display();
	u4.display();

}