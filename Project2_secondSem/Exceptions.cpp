#pragma once
#include "stdafx.h"
#include "Exceptions.h"
#include "including.h"


ReadException::ReadException()
{
}

std::string ReadException::getMessage()
{
	return message;
}


ReadException::~ReadException()
{
}

