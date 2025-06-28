#include<iostream>
#include<cstring>
using namespace std;
class grade {
public:
	int marks; // class member so will be accessible by all member functions 
   void getdata() {
		// function to ge the data aka marks 
		cout << "Enter the marks : ";
		cin >> marks;

	}
	void displaydata( ) {
		if (marks < 0 ||  marks > 100) { // to tackle the invalid state 
			cout << " Enter correct marks.";
		}
		else {
			if (marks >= 80 && marks <= 100) {
				cout << "Grade A" << endl;
			}
			else if (marks >= 70 && marks <= 79) {
				cout << "Grade B" << endl;
			}
			else if (marks >= 60 && marks <= 69) {
				cout << "Grade C" << endl;
			}
			else if (marks >= 50 && marks <= 59) {
				cout << "Grade D" << endl;
			}
			else   {
				cout << "Fail" << endl;
			}
		}

	}
};
int main() {
	grade g1; // creating object for our class 
	g1.getdata(); // calling funtion to get marks as input 
	g1.displaydata(); // now to display the result 
	return 0;
}
