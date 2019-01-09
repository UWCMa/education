#include "FindValue.hpp"
#include <numeric>

namespace Algorithms
{

int findAbsentValInSqns(std::vector<int>& v)
{
   size_t size = 0;
   auto real_sum = std::accumulate(v.begin(), v.end(), 0, [&size](int y, int x)
      {
         auto result = y;
         if(0 < x)
         {
            ++size;
            result = x + y;
         }
         return result; 
      } );
   auto sum = (size + 1) * (size + 2) / 2;
   return sum - real_sum;
}

int findAbsentDuplicate(std::vector<int>& v)
{
   int res = 0;
   for(auto x: v)
      res = res^x;

   return res;
}

}