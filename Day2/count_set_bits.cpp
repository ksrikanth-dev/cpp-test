#include<iostream>

using namespace std;

int main() {
   int n, set_count = 0, unset_count = 0;
   cout << "Enter a number to count set and unset bits: ";
   cin >> n;
   while(n > 0) {
      //Let's check if the last bit is 1 or 0
      if((n & 1 )== 1) { /*& has lower precedence than ==; need to put n&1 in brackets*/
         set_count++;
      } else {
          unset_count++;
      }
      n = n >> 1; //right shift 1 bit to remove last bit which we are done with
   }
   cout << "Number of set bits: " << set_count << " and unset bits: " << unset_count << endl;
}