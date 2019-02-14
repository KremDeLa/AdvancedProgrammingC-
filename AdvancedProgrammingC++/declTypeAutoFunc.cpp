 /* Declare Type(decltype) & Auto Function Declaration *
 * KSL                                                 *
 * Thu Feb 14 11:13:04 PST 2019                        */

#include <iostream>

template<class T, class S>
/* Auto Function with template types                         *
 * Information following (->) is the trailing type           *
 * -> Trailing type must be defined in case of auto function */
auto testOne(T value1, S value2) -> decltype(value1 + value2){
  return (value2 + " " + value1);
}

/* Integer to be used for auto function */
int get(){
  return 999;
}

/* Auto Function of type(int get()) */
auto testTwo()-> decltype(get()){
  return get();
}

int main(){
  std::string value1 = "Deckerd";
  std::string value2 = "Sgt.";

  std::cout << testOne(value1,value2) << std::endl;
  std::cout << testTwo() << std::endl;
}
