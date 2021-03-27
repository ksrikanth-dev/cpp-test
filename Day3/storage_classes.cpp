/*
compile this file with extern.cpp - 
    g++ storage_classes.cpp extern.cpp
*/
#include <iostream>

// Function declaration
static void fun(void);
 
static int count = 10; /* Global static variable */
int var = 100; // this would be used by write_extern() in extern.cpp
extern void write_extern(); // this function is declared some other file

// Function definition
static void fun( void ) {
   static int fun_call_count; // local static variable - 0
   fun_call_count++; // incremented on each fun() call
   std::cout << "fun_call_count is " << fun_call_count ;
   std::cout << " and count is " << count << std::endl;
}

class Test {
public:
    int x;
 
    // defining mutable variable y
    // now this can be modified by even constant object or method
    mutable int y;
 
    Test() { x = 4; y = 10; }
    void const_fun() const {
        /*uncommenting below line will cause error*/
        // x = 100;
        y = 200; // This works despite the method being const!
    }
};

int main() {
    std::cout<<"static storage class demo"<<std::endl;
    while(count--) {
        fun();
    }
    std::cout<<"demoed static storage class\n"<<std::endl;

    std::cout<<"extern storage class demo"<<std::endl;
    write_extern(); // calling a function external to this file
    std::cout<<"demoed extern storage class\n"<<std::endl;

    std::cout<<"mutable storage class demo"<<std::endl;
        // t1 is set to constant
    const Test t1;
 
    // trying to change the value
    t1.y = 20;
    std::cout << "t1.y: "<<t1.y <<std::endl;
 
    // Uncommenting below lines
    // will throw error
    // t1.x = 8;
    // cout << t1.x;
    t1.const_fun();
    std::cout << "t1.x: "<<t1.x <<std::endl;
    std::cout << "t1.y: "<<t1.y <<std::endl;
    std::cout<<"demoed mutable storage class\n"<<std::endl;
    return 0;
}

