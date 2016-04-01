#pragma once
#include "including.h"

#define END_OF_FILE 1
#define OPEN_ERROR 2
#define READ_ERROR 3


class Exceptions
{
public:
	int errorType;
	Exceptions();
	Exceptions(int e);
	void Error();
	~Exceptions();
};

