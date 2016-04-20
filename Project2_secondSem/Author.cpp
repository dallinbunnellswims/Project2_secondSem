#include "stdafx.h"
#include "including.h"
#include "Author.h"
#include "Exceptions.h"


Author::Author()
{
}
Author::Author(std::string s1, std::string s2)
{
	name = s1;
	address = s2;
}
std::string Author::getAddress()
{
	return address;
}
void Author::readData(std::ifstream& inStream)
{
	// read the name and address from the file
	getline(inStream, name);
	getline(inStream, address);

	// check the fail bit, if it is set and it is not end of file, throw a read error
	if (inStream.fail() && !inStream.eof())
	{
		throw Exceptions(READ_ERROR);
	}

	// if it is an end of file, throw an eof error
	if (inStream.eof())
	{
		throw Exceptions(END_OF_FILE);
	}
}
std::string Author::getName()
{
	return name;
}
Author::~Author()
{
}
