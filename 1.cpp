#include <iostream>
#include <string>
using namespace std;

// declares Author class
class Author{
	private:
		string name;
		string email;
		char gender;
	public:
		// default constructor
		Author()
		{
			name = " ";
			email = " ";
			gender = ' ';
		}
		
		// constructor 2
		Author(string name, string email, char gender)
		{
			this->name = name;
			this->email = email;
			this->gender = gender;
		}
		
		// set the name, email and gender
		void setName(string name)
		{
			this->name = name;
		}
		void setEmail(string email)
		{
			this->email = email;
		}
		void setGender(char gender)
		{
			this->gender = gender;
		}
		
		// get the name, email and gender
		string getName() const
		{
			return name;
		}
		string getEmail() const
		{
			return email;
		}
		char getGender()
		{
			return gender;
		}
		
		// toString
		string toString()
		{
			return name + ", " + email + ", " + gender;
		}
};

// main function
int main(){
	
	// declares variables
	string inputName;
	string inputEmail;
	char inputGender;
	
	// get prompt from the user
	cout << "Input your name: ";
	cin >> inputName;
	cout << "Input your email: ";
	cin >> inputEmail;
	cout << "Input Gender(F/M): ";
	cin >> inputGender;
	if(inputGender == 'F' || inputGender == 'f')
	{
		cout << "Female";
	} else if(inputGender == 'M' || inputGender == 'm')
	{
		cout << "Male";
	}
	
	Author author(inputName, inputEmail, inputGender);
	
	cout << author.toString();
	
}
