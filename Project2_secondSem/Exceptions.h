#pragma once
#include "including.h"

#define END_OF_FILE 1
#define OPEN_ERROR 2
#define READ_ERROR 3


class ReadException
{
public:
	int errorType;
	ReadException();
	ReadException(int e);
	void Error();
	~ReadException();
};

