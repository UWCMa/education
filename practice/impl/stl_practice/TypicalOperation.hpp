#include <algorithm>

namespace TypicalOperation
{
   //constructor
   //insert
   //assign
   
   /**************************Erase**********************************/

   /********erace the values*/
                     
   //Erase the value from vector, string, deque(
   //For a list too but more effective use с.remove(const N& value);)
   template <typename SqncConteiner, typename N>
   void erasingSqncConteiner(SqncConteiner& c, const N& value)
   {
      c.erase(std::remove(c.begin(), c.end(), value), c.end());
   };
   //For associative containers, the proper way to approach the problem is to call erase: c.erase(const N& value);
  
   /********erase using Predicate*/
                    
   //eliminate every object for which the following Predicate returns true:
   template <typename SqncConteiner, typename N>
   void erasingSqncConteiner(SqncConteiner& c, bool predicat( const N value))
   {
      c.erase(std::remove_if(c.begin(), c.end(), predicat), c.end());
   }
   //c.remove(predicate) - this is the best way to remove values using predicat when c is a list
   
   template <typename AssocContainer,  typename N>
   void erasingAssocContainer(AssocContainer& c, bool predicat( const N value))
   {
      for(auto it = c.begin(); it != c.end();)
      {
         if(predicat(*it))
            c.erase(it++);
         else
            ++it;
      }
   };

   /***********erase using Predicate and to do something else*/

   //For associate containers it's easy for solving: need to add this "something else"
   //into if brackets. For sequence containers it solves the following way:
   template <typename SqncConteiner, typename N>
   void erasingSqncConteiner(SqncConteiner& c, bool predicat( const N value), void function(int))
   {
      for(auto it = c.begin(); it != c.end();)
      {
         if(predicat(*it))
         {
            function(*it);
            it = c.erase(it);
         }
         else
            ++it;
      }
   }
}