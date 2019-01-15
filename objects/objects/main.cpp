#include <iostream>
#include <string> // allows us to use strings
using namespace std;


class car {

public: 

	car(string z) {
		/*
		 construcor is like a function. 
		 Always make constructor the same 
		 name as your class so c++ knows its a costructor
		 whatever you put in here happens as soon as you 
		 create the object. Main uuse fot them is to give
		 variables a initial value.

		*/
		//cout << "this is the defult print in the constructor, the line below is the name we set using the constructors paramaters" << endl;
		setName(z);
	}
	// we want to be able to set the variable and get (return) the variable, so we need 2 functions.
	void setName(string x) { // setter function
		name = x;

	}
	string getName() { // getter function, string getName since it returns a string.
		return name;
	}
	void setPrice(int p) {
		p = price;
	}

	int getPrice () {
		return price;
	}

private:
	string name;
	int price;
	// not good to make class variables public, make them privite.
	// but since we would not be able to access it we put them in public functions.


};

int main() {


	string name = "";
	int price = 0;

	car ford("ford");
	cout << "enter the name of the car" << endl;
	cin >> name;
	ford.setName(name);

	cout << "enter the price os the car" << endl;
	cin >> price;
	ford.setPrice(price);

	cout << "The name of the car is ";
	cout << ford.getName();

	cout << "and it costs ";
	cout << ford.getPrice();
	


	//car Tesla("Joey"); // maing an onject and setting the name using the constructor.
	//cout << Tesla.getName() << endl;


	//int age = 0;
	//cout << "hello world" << endl; // endl is the same as \n
	//cout << "my name is joey" << endl;
	//cout << "how old are you? ";
	//cin >> age;

	//cout << "you are " << age << " years old" << endl;

	//if (age >= 16) {
	//	cout << "you can drive!" << endl;
	//}
	//else {
	//	cout << "you cannot drive" << endl;

	//}

	return 0;
}