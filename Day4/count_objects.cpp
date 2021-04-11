#include <iostream>

using namespace std;

class Customer {
    string name;
    static int obj_count;
public:
    static string outlet_name;
    Customer() {
        cout<<"\nCreated a new customer object"<<endl;
        obj_count++;
    }
    static int get_obj_count() {
        return obj_count;
    }
};

//explicit initialization of static variable
int Customer::obj_count = 0;
string Customer::outlet_name = "Dominos";

int main() {
    //static variables/methods can be accessed even without creating objects
    cout<<"Outlet name: "<<Customer::outlet_name<<endl;
    Customer t1, t2;
    //some code
    //can't access Customer::obj_count directly as it's private
    cout<<"Count of objects created: "<<Customer::get_obj_count()<<endl; //proper call
    //or
    cout<<"Count of objects created: "<<t1.get_obj_count()<<endl; //allowed
    //or
    cout<<"Count of objects created: "<<t2.get_obj_count()<<endl; //allowed
    Customer t3;
    cout<<"Count of objects created: "<<Customer::get_obj_count()<<endl;
    return 0;
}