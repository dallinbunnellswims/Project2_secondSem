// Project2_secondSem.cpp : Defines the entry point for the console application.
//Classes for Book and Author

#include "including.h"
#include "driver.h"

int main()
{

	// create a vector for storing the account objects
	std::vector<Book> myBooks;

	// create three Author objects
	Author p1("J.K.Rowling", "Edinburgh, Scotland");
	Author p2("Suzanne Collins", "Connecticut, USA");
	Author p3("J.R.R. Tolkien", "Bournmouth, England");

	// Create three Book objects
	Book b1(p1, "Harry Potter and the Sorcerer's Stone", 256, 24.95);
	Book b2(p2, "Mockingjay", 400, 12.99);
	Book b3(p3, "The Hobbit", 322, 14.29);

	// add the books to the vector
	myBooks.push_back(b1);
	myBooks.push_back(b2);
	myBooks.push_back(b3);

	// call the displayBooks function to display the books
	displayBooks(myBooks);
	std::cout << "\n\n";

	system("PAUSE");
	return 0;
}

void displayBooks(const std::vector<Book>& books)
{
	// students need to write the code for this function
}



