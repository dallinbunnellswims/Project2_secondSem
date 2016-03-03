#pragma once
#include "including.h"
class Author
{
private:
	std::string address;
	std::string name;
public:
	Author();
	Author(std::string, std::string);
	std::string getName();
	std::string getAddress();
	~Author();
};

