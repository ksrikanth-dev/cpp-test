/*
default constructor
parameterized constructor
Note: parameterized ctr with single parameter is also called `conversion constructor`
parameterized constructor with default values
copy constructor
*/
#include <iostream>

using namespace std;

class abc {
private:
    int x, y;
public:
    //abc() { } // codeless default constructor
    abc() {
        cout<<"Default ctr"<<endl;
        x = 0;
        y = 0;
    }
    abc(int a, int b, int dummy/*just to overcome ctr ambiguity*/) {
        cout<<"Parameterized ctr"<<endl;
        x = a;
        y = b;
    }
    abc(int a, int b = 0) {
        cout<<"Parameterized ctr with default values"<<endl;
        x = a;
        y = b;
    }
    /* 
    //Can't have this constructor with default constructor
    //as it would cause constructor ambiguity
    abc(int a = 0, int b = 0) {
        cout<<"Parameterized ctr with default values"<<endl;
        x = a;
        y = b;
    }
    */
    abc(const abc& tmp){
        cout<<"Copy ctr"<<endl;
        x = tmp.x;
        y = tmp.y;
    }
    ~abc() {
        /*
        contains cleanup code
        deallocation of dynamically allocated memory
        to ensure proper release of resources used by this class
        */
        cout<<"dtr is called"<<endl;
    }
    void operator =(const abc &tmp) {
        cout<<"assignment operator function"<<endl;
        x = tmp.x;
        y = tmp.y;
    }
    void print() const {
        /*
        defining this function as const as we don't want print()
        to change any data members.
        Principle of least privilege: 
        -----------------------------
            Given the minimum levels of access – or permissions – needed to perform job functions.
            Ensures the entity has the requisite access needed – and nothing more.
            Use const whenever needed
        */
       cout<<"x: "<<x<<", y: "<<y<<endl;
    }
};

int main() {
    abc obj1; // default ctr is called here
    obj1.print();

    abc obj2(2,5, 100/*dummy*/); // parameterized ctr is called here
    obj2.print();

    abc obj3(3); // same as abc obj3 = 3; hence the name `conversion constructor`
    // copy ctr with default value is called here
    obj3.print();

    abc tmp1(obj2); // same as abc tmp1 = obj1; // copy constructor is called here
    tmp1.print();
    
    abc tmp2;
    tmp2 = obj3; // assignment operator function is called here
    tmp2.print();
}