#include<iostream>
using namespace std;

bool is_Logged_In(){
	string username, password, ur_name, ps_word;
	cout<<"Enter Username: ";
	cin>>username;
	cout<<"Enter Password: ";
	cin>>password;

	ifstream myFile;
	myFile.open("data\\" + username + ".txt");
	getline(myFile,ur_name);
	getline(myFile,ps_word);

	if(ur_name == username && ps_word == password){
		return true;
	}else{
		return false;
	}
}
int main(){
	int option;

	cout<<"1: Register"<<endl<<"2:Login"<<endl<<"Your Choice: ";
	cin>>option;
	if(option == 1){
		string username, password;

		cout<<"Select a Username: ";
		cin>>username;
		cout<<"Select a Password: ";
		cin>>password;

		ofstream MyFile;
		MyFile.open("data\\" + username + ".txt");
		MyFile<<username<<endl<<password;
		MyFile.close();

		main();
	}else if(option == 2){
		bool status = is_Logged_In();

		if(!status){
			cout<<"Incorrect Username Or Password!"<<endl;
			system("PAUSE");
			return 0;
		}else{
			cout<<"Succesfully Logged In"<<endl;
			system("PAUSE");
			return 1;
		}
	}
}
