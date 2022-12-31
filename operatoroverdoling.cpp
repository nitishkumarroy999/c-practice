#include<iostream>
using namespace std;

class fraction
{
private:
	int num,den;	
public:
	//constructor
	//default constructor
	fraction()
	{
		this->num=1;
		this->den=1;
	}
	//parameterized constructor
	fraction(int num, int den)
	{
		this->num=num;
		this->den=den;
	}

	//functions
	//getter functions
	pair<int,int> getter()
	{
		return {this->num,this->den};
	}
	//setter
	void setter(int num, int den)
	{
		this->num=num;
		this->den=den;
	}	
	//add function
	void add(fraction &f)
	{
		//getting num and den of curr object
		int num1=this->num;
		int den1=this->den;

		pair<int,int>temp=f.getter(); //get num and den private member of parameter object by getter function
		int num2=temp.first;
		int den2=temp.second;

		// Now (num1/den1)+(num2/den2)
		int prod=(den1*den2);
		int gcd=__gcd(den1,den2);
		int lcm=prod/gcd;

		int numerator=((lcm/den1)*num1)+((lcm/den2)*num2);
		int denominator=lcm;
		//simplify num/den

		int commonFactor=__gcd(numerator,denominator);
		numerator/=commonFactor;
		denominator/=commonFactor;

		//assign this num/den to curr obj
		this->num=numerator;
		this->den=denominator;

	}

	//operator Overloading
	fraction operator+(fraction &f2)
	{
		// f3=f1+f2
		// this-> ==>f1
		// f2 pass by ref

		//get num,den of f1
		pair<int,int> temp1=this->getter();
		int num1=temp1.first;
		int den1=temp1.second;

		// get num,den of f2;
		pair<int,int> temp2=f2.getter();
		int num2=temp2.first;
		int den2=temp2.second;

		fraction sum;
		//sum=f1+f2
		int prod=den1*den2;
		int gcd=__gcd(den1,den2);
		int lcm=prod/gcd;

		int num=((lcm/den1)*num1) + ((lcm/den2)*num2);
		int den=lcm;

		//simplify

		int gcd1=__gcd(num,den);
		num/=gcd1;
		den/=gcd1;

		// sum.num=num;// error bcz num is private member
		// we need to take help of setter fn
		sum.setter(num,den);
		return sum;


	}


	//display()
	void display()
	{
		cout<<this->num<<"/"<<this->den<<endl;
	}



	//Inbuilt destructor

};

//addition function
fraction addition(fraction &f1, fraction  &f2)
{
	//num1,den1
	pair<int,int>temp1=f1.getter();
	int num1=temp1.first;
	int den1=temp1.second;

	//num2,den2
	pair<int,int>temp2=f2.getter();
	int num2=temp2.first;
	int den2=temp2.second;

	fraction sum;

	// Now (num1/den1)+(num2/den2)
	int prod=(den1*den2);
	int gcd=__gcd(den1,den2);
	int lcm=prod/gcd;
	int numerator=((lcm/den1)*num1)+((lcm/den2)*num2);
	int denominator=lcm;

	//simplify num/den
	int commonFactor=__gcd(numerator,denominator);
	numerator/=commonFactor;
	denominator/=commonFactor;

	//assign this num/den to sum obj
	// by setter, bcz num,den is private members
	sum.setter(numerator,denominator);

	return sum;
}

int main()
{
	fraction f1(2,4); //parameterized constructor
	f1.display(); //2 4 
	fraction f2;
	f2.display(); //1 1

	f2.setter(4,4); // set num,den of f2 by setter function
	f2.display(); //4 4

	// f1=f1+f2;
	f1.add(f2);
	f1.display(); // 2/4 + 4/4==>6/4==>simplify to 3/2==>print 3 2
	f2.display(); // No change in f2 so print 4 4

	//Additional task
	// f3=f1+f2
	// solve it by addition function globally taking parameter of type fraction
	// same like we take parameter as int, here we take parameter of type fraction
	fraction f3=addition(f1,f2);// f3=3/2 + 4/4 ==>5/2

	f3.display(); //5 2

	fraction f4=f1+f2;
	f4.display();

	//homework
	// f3=f2-f1
	//f3=f2*f1

	return 0;
}