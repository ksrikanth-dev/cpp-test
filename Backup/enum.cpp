#include <iostream>

using namespace std;

//enum with default values
enum boolean { False, True }; // False - 0, True - 1
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
//enum with customized values
enum seasons { spring = 34, summer = 4, autumn = 9, winter = 32};

//one use case of enum - using distinct powers of 2 as values will allow us to 
//have non-overlapping binary numbers using which we can provide our text design preferences in this example
enum TextdesignFlags {
	ITALICS = 1,
	BOLD = 2,
	UNDERLINE = 4
};

//NOTE: We can create variable of enum type or use the members directly as values
int main()
{
    boolean condition; 
    condition = False;
    if(condition)
        cout<<"condition is true"<<endl;
    else
        cout<<"condition is false"<<endl;

    cout << "Day " << Wednesday+1<<endl;
    week today;
    today = Wednesday;
    cout << "Day " << today+1<<endl;

    cout << "Summer = " << summer << endl;

    int myTextDesign = BOLD | UNDERLINE; // 6
    cout<<endl<<"myTextDesign: "<<myTextDesign<<endl;
    if(myTextDesign & BOLD)
        cout<<"logic to display text in bold"<<endl;
    if(myTextDesign & UNDERLINE)
        cout<<"logic to display text with underline"<<endl;
    if(myTextDesign & ITALICS)
        cout<<"logic to display text in italics"<<endl;

    return 0;
}