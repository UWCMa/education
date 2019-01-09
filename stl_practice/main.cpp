#include <iostream>
#include "TestClassA.hpp"
#include "algorithms/FindValue.hpp"

using namespace std;

int main()
{
   TestClassA obj;

   vector<int> v({5,1,3,4,2,-3,6, -7, 0});
   vector<int> v2({5,666,666,2,3,2,3, -5,-5});
   cout << "value1 = " << Algorithms::findAbsentValInSqns(v) << endl;
   cout << "value2 = " << Algorithms::findAbsentDuplicate(v2) << endl;

   return 0;
}