#include "including.h"
#include "Book.h"

Book::Book()
{
}

Book::Book(std::string s1, std::string s2, int i1, double d1)
{
	name = s1;
	title = s2;
	pages = i1;
	price = d1;
}

std::string Book::getName() 
{
	return name;
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
