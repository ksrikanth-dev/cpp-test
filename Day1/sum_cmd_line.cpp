#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int sum = 0;
    for(int i=1; i<argc; i++) {
        //cout<<argv[i]; //uncomment this line to print the numbers read from command line
        sum += stoi(argv[i]);
        //sum = sum + stoi(argv[i]);
    cout<<"Sum of the numbers passed as command line arguments is "<<sum;
    return 0;
}

/*
sample output:

$ g++ sum_cmd_line.cpp -o sum
$ ./sum 1 2 3 4
Sum of the numbers passed as command line arguments is 10
*/