#ifndef ABSTRACTFACTORY_HPP
#define ABSTRACTFACTORY_HPP

#include <memory>

class AbstractFactory
{
public:
	AbstractFactory();
	~AbstractFactory();

	void showMessage();

private:
	std::shared_ptr<bool> ptr;
};

#endif //ABSTRACTFACTORY_HPP