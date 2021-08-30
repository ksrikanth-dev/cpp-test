#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    cout<<"Here are the command line arguments of this program -"<<endl;
    for(int i=0; i<argc; i++) {
        cout<< "\t" << argv[i] << endl;
    }
    return 0;
}

/*
sample output:

$ g++ cmd_line_args.cpp -o cmdline
$ ./cmdline fg=black bg=red pixel=0.5
Here are the command line arguments of this program -
        cmdline
        fg=black
        bg=red
        pixel=0.5
*/