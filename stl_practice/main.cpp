#include <iostream>
#include <vector>
#include "impl/TestClassA.hpp"

using namespace std;

int main()
{
   TestClassA obj;
   auto s = []() {return 785684684; };
   s();
   vector<int> v;
   cout  << "hello" <<  s() << endl;
   return 0;
}