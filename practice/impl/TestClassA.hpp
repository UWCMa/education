#include <iostream>
#include <algorithm>
#include <fstream>
#include <list>

class TestClassA
{
public:
   explicit TestClassA();
   ~TestClassA();

   void readFromFile(const char*);

   template <typename T>
   void show( const T& v);
private:
   std::list<int> mList;
   std::ifstream dataFile;
};

   template <typename T>
   void TestClassA::show( const T& v)
   {
      for(auto x: v)
         std:: cout << "value: " << x << std::endl;
   }