#pragma once
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
void Book::readData(std::ifstream& inStream)
{
	
}
void Book::writeData(std::ofstream& outStream)
{
	outStream << myAuthor.getName() << std::endl << myAuthor.getAddress() << std::endl << title << std::endl << pages << std::endl << price << std::endl;
}

Book::~Book()
{
}
