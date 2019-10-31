#include "TraceLogger.hpp"
#include <iostream>

TraceLogger::TraceLogger(const char* funcName, int lineNumber )
	: _funcName(funcName)
{
	std::cout << "Entering   " << _funcName << ": " << lineNumber << ")";
}

TraceLogger::~TraceLogger()
{
	std::cout << "  Leaving  " << _funcName << std::endl;
}

void TraceLogger::print()
{
    std::cout << std::endl;
}
