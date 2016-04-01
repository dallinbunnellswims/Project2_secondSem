#pragma once
#include "stdafx.h"
#include "Exceptions.h"
#include "including.h"


Exceptions::Exceptions()
{
}

Exceptions::Exceptions(int e)
{
	errorType = e;
}

void Exceptions::Error()
{
	if (errorType == END_OF_FILE)
		std::cout << "End of File Error." << std::endl;
	else if (errorType == OPEN_ERROR)
		std::cout << "Couldn't open the file" << std::endl;
	else if (errorType == READ_ERROR)
		std::cout << "Couldn't read the file." << std::endl;
}

Exceptions::~Exceptions()
{
}

