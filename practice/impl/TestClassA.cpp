#include "TestClassA.hpp"
#include <iostream>

TestClassA::TestClassA()
{
   std::cout << "TestClassA::constr" << std::endl;
}

TestClassA::~TestClassA()
{
   std::cout << "TestClassA::destr" << std::endl; 
}