#include "stdafx.h"
#include "including.h"
#include "Author.h"


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
std::string Author::getName()
{
	return name;
}
Author::~Author()
{
}
