#include <iostream>

extern int var; // var is defined somewhere else
extern void fun(void); // fun is not visible in this scope as it's static by definition
void write_extern(void) {
   std::cout << "Count is " << var << std::endl;
   /*
   uncommenting this will cause linking failure during compilation as the function is not visible in this scope
   */
   //fun(); 
}