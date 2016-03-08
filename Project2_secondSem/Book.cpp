#include "stdafx.h"
#include "including.h"
#include "Book.h"


Book::Book()
{
}

Book::Book(Author bookAuthor, std::string s2, int i1, double d1)
{
	myAuthor = bookAuthor;
	title = s2;
	pages = i1;
	price = d1;
}

Author Book::getAuthor()
{
	return myAuthor;
}

std::string Book::getTitle()
{
	return title;
}
int Book::getPages()
{
	return pages;
}
double Book::getPrice()
{
	return price;
}
Book::~Book()
{
}
