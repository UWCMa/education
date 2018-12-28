#include <iostream>
#include <vector>

using namespace std;

int main()
{
   auto s = []() {return 785684684; };
   s();
   vector<int> v;
   cout  << "hello" <<  s() << endl;
   return 0;
}