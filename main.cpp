#include <iostream>
#include "education/include/commonTypes.hpp"

int main()
{

	int x = 0;
	auto f = [&x](){x = 5;};
    f();

	std::cout << "hello " << x << "enum = " << commonTypes::someType::ONE << std::endl;
	
	return 0;
}
