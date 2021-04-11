#include <iostream>

using namespace std;

class Exam {
	private:
		int numberOfMarks;
		int *p;
		float average;
	public:
		Exam();
        Exam(const Exam&);
        void operator =(const Exam&);
		~Exam();
		void set(int);
		void print() const;
		void calculateAverage();
};

Exam::Exam() {
    cout<<"default ctr"<<endl;
    numberOfMarks = 0;
    p = NULL;
    average = 0;
}

Exam::Exam(const Exam& tmp) {
    cout<<"copy ctr"<<endl;
    numberOfMarks = tmp.numberOfMarks;
    if(numberOfMarks != 0 && tmp.p != NULL) {
        p = new int[numberOfMarks];
        for(int i=0; i<numberOfMarks; i++)
            p[i] = tmp.p[i];
        average = tmp.average;
    }
}

void Exam::operator=(const Exam& tmp) {
    cout<<"assignment operator function"<<endl;
    numberOfMarks = tmp.numberOfMarks;
    if(numberOfMarks != 0 && tmp.p != NULL) {
        p = new int[numberOfMarks];
        for(int i=0; i<numberOfMarks; i++)
            p[i] = tmp.p[i];
        average = tmp.average;
    }
}

Exam::~Exam() {
    cout<<"dtr called"<<endl;
    if(p != NULL) {
        cout<<"going to delete the dynamic array"<<endl;
        delete []p;
        p = NULL;
    }
}

void Exam::set(int n) {
    numberOfMarks = n;
    if( numberOfMarks <= 0) {
        cout<<"size of array should be non-zero positive number"<<endl;
        return;
    }
    p = new int[numberOfMarks];
    if( !p )/*or, if( p == NULL )*/ {
        cout<<"dynamic memory allocation failed!"<<endl;
        return;
    }
    cout<<"Enter "<<numberOfMarks<<" marks: ";
    for(int i=0; i<numberOfMarks; i++){
        cin>>p[i];
    }
    calculateAverage();
}

void Exam::calculateAverage() {
    int sum = 0;
    for(int i=0; i<numberOfMarks; i++){
        sum += p[i];
    }
    average = (float)sum/numberOfMarks;
}

void Exam::print() const {
    cout<<"The "<<numberOfMarks<<" marks are: ";
    for(int i=0; i<numberOfMarks; i++){
        cout<<p[i]<<" ";
    }
    cout<<endl<<"The average is: "<<average<<endl<<endl;
}

int main()
{
    Exam someclass;
    someclass.set(5);
    someclass.print();

    Exam otherclass(someclass);
    otherclass.print();

    Exam anotherclass;
    anotherclass = someclass;
    anotherclass.print();

    return 0;
}