#include "stdafx.h"
#include "Exceptions.h"
#include "including.h"


FileOpenException::FileOpenException()
{
}

std::string FileOpenException::getMessage()
{
	return message;
}


FileOpenException::~FileOpenException()
{
}

ReadErrorException::ReadErrorException()
{
}

std::string ReadErrorException::getMessage()
{
	return message;
}

ReadErrorException::~ReadErrorException()
{
}
