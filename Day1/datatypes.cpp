#include<iostream>

using namespace std;

int main() 
{
/*
keywords common for C and C++: 
    char, int (short int), long, float, double, long double
additional keywords in C++:
    char - for ASCII - supports 256 characters
    wchat_t - for Unicode - supports 65536 characters
modifiers:
    signed - e.g: signed int (data types are signed by default)
    unsigned - e.g: unsigned int, unsigned char
    short - short int (short)
    long - long int (long), long long int (long long)
*/    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;

    bool flag = true;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    wchar_t ch = L'A'; // Note the L infront of 'A'
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    return 0;
}