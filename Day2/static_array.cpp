/*
This program creates an array of static/fixed size,
reads array elements from user and prints average of the array elements
Caution!!!
    this program can't work with elements morethan size of the fixed array
*/
#include <iostream>

using namespace std;

int main() {
    int arr[5];
    int size = 5, sum = 0;
    float average;

    cout<<"Enter "<<size<<" elements of the array: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<size; i++) {
        sum += arr[i];
    }
    average = (float)sum/size; // type casting to get the answer in float instaed of int
    cout<<"Average of the entered numbers: "<<average;
}

/*
Sample output:
$ g++ static_array.cpp -o staticArray

$ ./staticArray
Enter 5 elements of the array: 3 5 7 2 6
Average of the entered numbers: 4.6
*/