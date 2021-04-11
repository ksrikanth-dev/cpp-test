#include <iostream>

using namespace std;

int dynamic_array_demo() {
    int *arr = NULL, size;

    cout<<"Enter the desired size of array: ";
    cin>>size;
    if(size <= 0) {
        cout<<"size of array should be non-zero positive number"<<endl;
        return 1;
    }

    arr = new int[size];
    if( !arr ) {
        cout<<"dynamic memory allocation failed!"<<endl;
        return 2;
    }

    float *average = new float(0);
    int sum = 0;
    cout<<"Enter "<<size<<" numbers: ";
    for(int i=0; i<size; i++) {
        cin>>arr[i]; // usage is just like normal array
        // or cin>> *(arr + i);
        sum += arr[i];
    }
    *average = (float)sum/size;
    cout<<"Average: "<<*average<<endl;

    delete average; // to delete dynamically allocated block pointed by average
    delete []arr; // to delete dynamically allocated array

    return 0;
}

int main() {
    dynamic_array_demo();

    return 0;
}