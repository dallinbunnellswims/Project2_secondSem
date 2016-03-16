#pragma once
#include "including.h"
#include "author.h"
class Book
{
private:
	Author myAuthor;
	std::string title;
	int pages;
	double price;
public:
	Book();
	Book(Author, std::string, int, double);
	Author getAuthor();
	std::string getTitle();
	int getPages();
	double getPrice();
	bool readData(std::ifstream&);
	void writeData(std::ofstream&);
	~Book();
};

