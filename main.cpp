#include <iostream>
//#include "commonTypes.hpp"
#include "AbstractFactory.hpp"

int main()
{
	AbstractFactory a;
	a.showMessage();

	int x = 0;
	auto f = [&x](){x = 5;};
    f();

	std::cout << "hello " << x << std::endl;
	//std::cout << "enum = " << someType::NONE << std::endl;
	
	return 0;
}
