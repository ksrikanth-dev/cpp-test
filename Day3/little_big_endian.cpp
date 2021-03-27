/*
Endianness is the order or sequence of bytes of a word of digital data in computer memory.
It describes how data is stored.
It defines which end of a multi-byte data type contains the most significant values.
Let's see how int x = 0x01234567 is stored in different endian systems:
In a Big endian system:
 Location:      A1      A2      A3      A4
 Value:         01      23      45      67
In a Little endian system:
 Location:      A1      A2      A3      A4
 Value:         67      45      23      01
*/
#include<iostream>

using namespace std;

int main() {
    //method1
    int num = 1;
    if(*(char *)&num == 1) {
        cout<<"\nLittle-Endian\n";
    } else {
        cout<<"Big-Endian\n";
    }

    //method2
    union {
        uint32_t i;
        char c[4];
    } bint = {1};
    if( bint.c[0] == 1 ) {
        cout<<"\nLittle-Endian\n";
    } else {
        cout<<"Big-Endian\n";
    }
}