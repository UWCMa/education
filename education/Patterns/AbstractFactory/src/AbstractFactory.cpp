#include "AbstractFactory.hpp"
#include <iostream>

AbstractFactory::AbstractFactory()
	:ptr(std::make_shared<bool>())
{

}

AbstractFactory::~AbstractFactory()
{
}

void AbstractFactory::showMessage()
{
	std::cout << "AbstractFactory::showMessage"
	<< std::endl;
}