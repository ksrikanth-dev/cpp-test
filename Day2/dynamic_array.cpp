/*
This program creates an array of user defined size using
dynamic memory allocation,
reads array elements from user and prints average of the array elements
Note:
    This program can accomodate as many elements as the user chooses
    by entering size at runtime.
*/
#include <iostream>

using namespace std;

int main() {
    int *arr; // using this instead of int arr[5];
    int size, sum = 0;
    float average;

    cout<<"Enter size of the array: ";
    cin>>size;

    arr = new int[size]; // creating array with size dynamically
    if( arr == NULL ) {
        cout<<"Couldn't allocate memory for array!";
        return -1;
    }

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
$ g++ dynamic_array.cpp -o dynamicArray

$ ./dynamicArray.exe ----------------------> first run
Enter size of the array: 5
Enter 5 elements of the array: 2 6 2 7 3
Average of the entered numbers: 4

$ ./dynamicArray.exe ----------------------> second run
Enter size of the array: 10
Enter 10 elements of the array: 3 4 5 6 2 6 7 3 7 3
Average of the entered numbers: 4.6
*/