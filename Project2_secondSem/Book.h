#pragma once
#include "including.h"
#include "author.h"
class Book
{
private:
	std::string Author::name;
	std::string title;
	int pages;
	double price;
public:
	Book();
	Book(std::string, std::string, int, double);
	std::string getName();
	std::string getTitle();
	int getPages();
	double getPrice();
	~Book();
};

