Class
Object

Encapsulation
Abstraction
Inheritance
Polymorphism

Constructor
Destructor
  
**
Copy constructor:**
- A copy constructor is a member function that initializes an object using another object of the same class. A copy constructor has the following general function prototype:  

    ClassName (const ClassName &old_obj);  
  
- In C++, a Copy Constructor may be called in the following cases:  
1. When an object of the class is returned by value.  
2. When an object of the class is passed (to a function) by value as an argument.  
3. When an object is constructed based on another object of the same class.  
4. When the compiler generates a temporary object.  
It is, however, not guaranteed that a copy constructor will be called in all these cases, because the C++ Standard allows the compiler to optimize the copy away in certain cases, one example is the **return value optimization** (sometimes referred to as **RVO**).
  
**Return value optimization (RVO):** 
- It is a compiler optimization that involves eliminating the temporary object created to hold a function's return value. RVO is allowed to change the observable behaviour of the resulting program by the C++ standard.  
- In general, the C++ standard allows a compiler to perform any optimization, provided the resulting executable exhibits the same observable behaviour as if (i.e. pretending) all the requirements of the standard have been fulfilled. This is commonly referred to as the "as-if rule". The term return value optimization refers to a special clause in the C++ standard that goes even further than the "as-if" rule: an implementation may omit a copy operation resulting from a return statement, even if the copy constructor has side effects.  
- The following example demonstrates a scenario where the implementation may eliminate one or both of the copies being made, even if the copy constructor has a visible side effect (printing text).[1] The first copy that may be eliminated is the one where a nameless temporary C could be copied into the function f's return value. The second copy that may be eliminated is the copy of the temporary object returned by f to obj.  
#include <iostream>

struct C {
  C() = default;
  C(const C&) { std::cout << "A copy was made.\n"; }
};

C f() {
  return C();
}

int main() {
  std::cout << "Hello World!\n";
  C obj = f();
}
Depending upon the compiler, and that compiler's settings, the resulting program may display any of the following outputs:

Hello World!
A copy was made.
A copy was made.
Hello World!
A copy was made.
Hello World!

