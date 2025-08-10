#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {

	bool Answers[10] = { false,true,true,false,false,false,true,true,true,false };

	string input;
	bool Answer = false;
	int Marks = 0;

	for (int I = 0; I < 10; I++) {
		cout << "Please note questons should just be answered in F and T's\n";
		cout << "\nQuestion" << I + 1 << ":";
		cin >> input;
		if (input == "F") {
			Answer = true;
		}
		else if (input == "T") {
			Answer = false;
		}
		

		if (Answer == Answers[I]) {
			Marks++;
		}
		

	}	

	cout << "Please note your finale score is : " << Marks;

}
