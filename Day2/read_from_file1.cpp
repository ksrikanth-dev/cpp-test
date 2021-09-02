#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile("data.txt", ios::in); //opening the file
    if( ! inFile.is_open() ) {
        cout<<"Couldn't open file- data.txt!, please check"<<endl;
        return -1;
    }

    // let's print the file content
    string str;
    while( inFile >> str ) {
        //cout << str; // this prints words without spaces
        cout << str << " "; // this prints words with spaces
    }

    return 0;
}

/*
sample output:

$ g++ read_from_file1.cpp -o readfile1
$ ./readfile1
This line is from the file data.txt
*/