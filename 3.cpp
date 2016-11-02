#include <iostream>
#include <string>
using namespace std;

// declares Author class
class Author{
	private:
		string *authorName;
		string email;
		char gender;
	public:
		// default constructor
		Author()
		{}
		// constructor 2
		Author(string authorName, string email, char gender)
		{
			this->authorName = new string(authorName);
			this->email = email;
			this->gender = gender;
		}
		// set the name, email and gender
		void setName(string name)
		{
			authorName = new string(name);
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
			return *authorName;
		}
		string getEmail() const
		{
			return email;
		}
		char getGender()
		{
			return gender;
		}
		// to String
		string toString()
		{
			string display;
			display = "Author(Name: " + *authorName + ", email: " + email + ", gender: " + gender;
			return display;
		}
};

class Book{
	private:
		string bookName;
		Author *author;
		double price;
		int qty;
	public:
		// default constructor
		Book()
		{}
		// constructor 2
		Book(string name, Author author, double price)
		{
			bookName = name;
			this->author = new Author(author);
			this->price = price;
		}
		// constructor 3
		Book(string name, Author author, double price, int qty)
		{
			bookName = name;
			this->author = new Author(author);
			this->price = price;
			this->qty = qty;
		}
		// get name, author, price and qty
		string getBookName() const
		{
			return bookName;
		}
		Author getAuthor() const
		{
			return *author;
		}
		double getPrice() const
		{
			return price;
		}
		int getQty() const
		{
			return qty;
		}
		// set name, author, price and qty
		void setName(string n) 
		{
			bookName = n;
		}
		void setAuthor(Author a)
		{
			author = new Author(a);
		}
		void setPrice(double p)
		{
			price = p;
		}
		void setQty(int q)
		{
			qty = q;
		}
		// to String
		string toString()
		{
			string display;
			display = "Book(Name: " + bookName + ", " + author->toString() + ", price: " + to_string(price) + ", qty: " + to_string(qty) + ")";
			return display;
		}
};

// main function
int main(){
	
	// creates an arrray of Author
	const int NUM_AUTHOR = 2;
	Author author[NUM_AUTHOR] = {Author("Archel Taneka", "archel@yahoo.com", 'M'),
						Author("Charottama", "charottama@yahoo.com", 'M')};
	int counter;
	
	// display authors
	for(counter = 0; counter < NUM_AUTHOR; counter++)
	{
		cout << "Name: " << author[counter].getName() << endl;
		cout << "Email: " << author[counter].getEmail() << endl;
		cout << "Gender: ";
	
		if(author[counter].getGender() == 'm' || author[counter].getGender() == 'M')
		{
			cout << "Male" << endl;
		} else if(author[counter].getGender() == 'f' || author[counter].getGender() == 'F')
		{
			cout << "Female" << endl;
		}
	}
	
	// display books
	const int NUM_BOOKS = 2;
	Book book[NUM_BOOKS] = {Book("Dig Bick", author[0], 400, 20), Book("How to be a Pokemon Master", author[1], 500, 10)};
	
	for(counter = 0; counter < NUM_BOOKS; counter++)
	{
		cout << book[counter].toString() << endl;
	}
	
	
	return 0;
}
