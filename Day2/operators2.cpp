#include <iostream>

using namespace std;

int main(void)
{
    int target, source;
    int *m;
    source = 10;
    m = &source;
    target = *m;
    cout<<"target: "<<target<<endl;
    *m = 20;
    cout<<"source: "<<source<<" target: "<<target<<endl;
    return 0; 
}