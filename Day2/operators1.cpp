#include<iostream>

using namespace std;

/* A simple cipher function. */ 
char encode(char ch)
{
    return(~ch); /* complement it */ 
}

/* A simple cipher function. */ 
char decode(char ch)
{
    return(~ch); /* complement it */ 
}

int main() {
    unsigned int i;
    int j;
    i = 1;
    /* left shift */
    for(j=0; j<4; j++) {
       i = i << 1;  /* left shift i by 1, which
                       is same as a multiply by 2 */
       cout<<"Left shift "<<j<<" : "<<i<<endl;
     }
     /* right shift */
     for(j=0; j<4; j++) {
       i = i >> 1;  /* right shift i by 1, which
                       is same as a division by 2 */
       cout<<"Right shift "<<j<<" : "<<i<<endl;
     }
     
    return 0;
}