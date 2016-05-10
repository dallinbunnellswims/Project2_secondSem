#pragma once
#include "stdafx.h"
#include "including.h"
#include "Book.h"
#include "Exceptions.h"

const std::string fileName = "bookData.txt";

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
	inStream.open(fileName);
	getline(inStream, title);
	if (inStream.fail() && !inStream.eof())
		throw Exceptions(READ_ERROR);
	else if (inStream.eof())
		throw Exceptions(END_OF_FILE);
	else
	{
		std::string inputValue;
		//read pages, throw exception if can't convert
		getline(inStream, inputValue);
		try 
		{
			pages = stoi(inputValue);
		}
		catch (std::invalid_argument e)
		{
			throw Exceptions(READ_ERROR);
		}
		getline(inStream, inputValue);
		try
		{
			price = stod(inputValue);
		}
		catch (std::invalid_argument e)
		{
			throw Exceptions(READ_ERROR);
		}

		try
		{
			myAuthor.readData(inStream);
		}
		catch (Exceptions e)
		{
			throw;
		}
		if (inStream.fail() && !inStream.eof())
		{
			throw Exceptions(READ_ERROR);
		}
		else if (inStream.eof())
			throw Exceptions(END_OF_FILE);
	} //end of else clause ... finished reading
	
}
void Book::writeData(std::ofstream& outStream)
{
	outStream << myAuthor.getName() << std::endl;
	outStream << myAuthor.getAddress() << std::endl;
	outStream << title << std::endl;
	outStream << pages << std::endl;
	outStream << price << std::endl;
}

Book::~Book()
{
}
