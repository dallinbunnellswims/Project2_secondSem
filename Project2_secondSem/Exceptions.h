#pragma once
#include "including.h"
class FileOpenException
{
public:
	std::string message = "Couldn't open the file.";
	FileOpenException();
	std::string getMessage();
	~FileOpenException();
};

class ReadErrorException
{
public:
	std::string message = "Couldn't read the file.";
	ReadErrorException();
	std::string getMessage();
	~ReadErrorException();
};