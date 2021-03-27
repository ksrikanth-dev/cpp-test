#include<iostream>
#include<string.h>

using namespace std;

// declaring structure
struct struct_example
{
    int integer;
    float decimal;
    char name[20];
};
  
// declaraing union
union union_example
{
    int integer;
    float decimal;
    char name[20];
};
  
int main()
{
    // creating variable for structure
    // and initializing values
    struct struct_example s={18,38,"hello world"};
  
    // creating variable for union
    // and initializing values
    //union union_example u={18,38,"geeksforgeeks"}; // not allowed as union expects only one element at a time
    union union_example u = {18};

    cout<<"structure data:\n integer: "<<s.integer<<
        "\n decimal: "<<s.decimal<<"\n name: "<<s.name<<endl;

    cout<<"union data:\n integer: "<<u.integer<<
        "\n decimal: "<<u.decimal<<"\n name: "<<u.name<<endl;
  
    // difference in size
    cout<<"\nsizeof structure : "<< sizeof(s);
    cout<<"\nsizeof union : "<< sizeof(u);
      
    // accessing elements
    cout<<"\n\nAccessing all members at a time:"<<endl;
    s.integer = 183;
    s.decimal = 90;
    strcpy(s.name, "good morning");
      
    cout<<"structure data:\n integer: "<<s.integer<<
        "\n decimal: "<<s.decimal<<"\n name: "<<s.name<<endl;
      
    u.integer = 183;
    u.decimal = 90;
    strcpy(u.name, "good morning");
      
    cout<<"union data:\n integer: "<<u.integer<<
        "\n decimal: "<<u.decimal<<"\n name: "<<u.name<<endl;
      
    cout<<"\n\nAccessing one member at time:"<<endl;
      
    cout<<"\nstructure data:";
    s.integer = 240;
    cout<<"\n integer: "<< s.integer;
      
    s.decimal = 120;
    cout<<"\n decimal: "<< s.decimal;
      
    strcpy(s.name, "C++ programming");
    cout<<"\n name: "<< s.name;
      
    cout<<"\nunion data:";
    u.integer = 240;
    cout<<"\n integer: "<< u.integer;
      
    u.decimal = 120;
    cout<<"\n decimal: "<< u.decimal;
      
    strcpy(u.name, "C++ programming");
    cout<<"\n name: "<< u.name<<endl;
}