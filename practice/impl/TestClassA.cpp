#include "TestClassA.hpp"
#include <iostream>
#include <iterator>

TestClassA::TestClassA()
   : mList()
{
   std::cout << "TestClassA::constr" << std::endl;
}

TestClassA::~TestClassA()
{
   std::cout << "TestClassA::destr" << std::endl; 
}

void TestClassA::readFromFile(const char* path)
{
   dataFile.open(path);
   if(dataFile.is_open())
   {
      std::istream_iterator<int> dataBegin(dataFile);
      std::istream_iterator<int> dataEnd;
      mList.insert(mList.begin(), dataBegin, dataEnd);
      for(auto x: mList)
         std::cout << "mList: " << x << std::endl;
      dataFile.close();
   }
   else
   {
      std::cout << "file did not open!" << std::endl;

   }
 
}