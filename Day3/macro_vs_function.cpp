#include <iostream>

// sometimes, we declare named constants as macros 
#define PI 3.14

#define CUBE(b) b*b*b
int cube_fun(int a)
{
     return a*a*a;
}
#define SQUARE(a) a * a
/*
If you have two structures that happen to contain a field with the same name 
but different semantics, the same macro might work on both, with strange results:
*/
struct shirt {
    int numButtons;
};
struct webpage {
    int numButtons;
};
#define num_button_holes(shirt)  ((shirt).numButtons * 4)

using namespace std;

int main() {
    // Observe the difference in output with macro vs function
    cout<<"CUBE(1+2) = "<<CUBE(1+2)<<endl;
    /*
    CUBE(1+2) is replace with 1+2*1+2*1+2 = 7
    */
    cout<<"cube_fun(1+2) = "<<cube_fun(1+2)<<endl;
    /*
    Here the function is called with effective value of the argument i.e., 3.
    And then 3*3*3 is evaluated to 27 and returned by the function
    */
    int a = 5;
    cout<<"SQUARE(a++) = "<<SQUARE(a++)<<endl; // 30
   
    struct webpage page;
    page.numButtons = 2;
    cout<<"num_button_holes(page) = "<<num_button_holes(page)<<endl; // -> 8
}