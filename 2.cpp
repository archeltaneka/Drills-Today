#include <iostream>
#include <string>
using namespace std;

// declares Author class
class Author{
	private:
		string authorName;
		string email;
		char gender;
	public:
		// default constructor
		Author()
		{
			authorName = "";
			email = "";
			gender = ' ';
		}
		// constructor 2
		Author(string authorName, string email, char gender)
		{
			this->authorName = authorName;
			this->email = email;
			this->gender = gender;
		}
		// set the name, email and gender
		void setName(string name)
		{
			authorName = name;
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
			return authorName;
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
			display = "Author(Name: " + authorName + ", email: " + email + ", gender: " + gender;
			return display;
		}
};

class Book{
	private:
		string bookName;
		Author author;
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
			this->author = author;
			this->price = price;
		}
		// constructor 3
		Book(string name, Author author, double price, int qty)
		{
			bookName = name;
			this->author = author;
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
			return author;
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
			author = a;
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
			display = "Book(Name: " + bookName + ", " + author.toString() + ", price: " + to_string(price) + ", qty: " + to_string(qty) + ")";
			return display;
		}
};

// main function
int main(){
	
	Author author("aaa", "aaaa@yahoo.com", 'M');
	
	cout << "Name: " << author.getName() << endl;
	cout << "Email: " << author.getEmail() << endl;
	cout << "Gender: ";
	
	if(author.getGender() == 'm' || author.getGender() == 'M')
	{
		cout << "Male" << endl;
	} else if(author.getGender() == 'f' || author.getGender() == 'F')
	{
		cout << "Female" << endl;
	}
	
	Book book("Dig Bick", author, 400, 10);
	cout << book.toString();
	
}
