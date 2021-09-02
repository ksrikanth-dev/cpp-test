#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("medicines.txt", ios::in); //opening the file
    if( ! inFile.is_open() ) {
        cout<<"Couldn't open file- data.txt!, please check"<<endl;
        return -1;
    }

    // let's print the file content
    string medicine;
    int count;
    double price; // we may use float price; too
    while( inFile >> medicine >> count >> price ) {
        cout << "medicine: " << medicine <<
                ", in stock: " << count <<
                ", price: " << price << endl;
    }

    return 0;
}

/*
sample output:

$ g++ read_from_file2.cpp -o readfile2
$ ./readfile2
medicine: Paracetamol, in stock: 14, price: 10.5
medicine: Aspirin, in stock: 20, price: 15.2
medicine: Navalgin, in stock: 5, price: 11.9
*/