#include <iostream>
using namespace std;

int main() {
	int MainArr[10];

	int CurrentMark, AverageClassMark = 0;
	int studentCount = 0;
	for (int I = 0; I < 10;) {
		cout << "Please enter the mark of student : " << studentCount + 1 << " : ";
		cin >> CurrentMark;

		if (CurrentMark < 0 || CurrentMark > 100) {
			cout << "\nPlease enter a valid number";
			cout << "\nThe number must be between 0 and 100\n\n";
			
			
		}
		else {
			MainArr[I] = CurrentMark;
			studentCount++;
			I++;
		}

		

		
		
	}

	for (int i = 0; i < 10; i++) {
		AverageClassMark += MainArr[i];
	}

	cout << "Please note the average score of the class is : " << (AverageClassMark / studentCount) << "%" << endl;
	return 0;
}
