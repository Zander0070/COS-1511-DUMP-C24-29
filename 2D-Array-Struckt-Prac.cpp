#include <iostream>
#include <string.h>
#include <string>

using namespace std;



struct Student{
	string Name;
	int Age;
	float TestScore;
};

int main() {
	
	Student p1;
	string StudentInfo[5][2];
	int StudentMarks[5];
	int row = 0, column = 0,Count = 0;

	bool Stop = false;
	string Answer;
	while (Stop == false && Count < 5) {
		cout << "\nEnter your student name : ";
		cin >> p1.Name;
		StudentInfo[row][0] = p1.Name;
	
		cout << "\nEnter your age : ";
		cin >> p1.Age;
		StudentInfo[row][1] = to_string(p1.Age);
		row++;
		cout << "\nEnter your Mark : ";
		cin >> p1.TestScore;
		StudentMarks[Count] = p1.TestScore;
		Count++;

		cout << "Continue (Y/N) : ";
		cin >> Answer;

		if (Answer == "Y")
		{
			Stop = false;
		}
		else {
			cout << "\n";
			Stop = true;
		}

	}

	double ToTalMark = 0;

	for (int i = 0; i < Count; i++)
	{
		cout << StudentInfo[i][0] << ", Age : " <<StudentInfo[i][1] << ", Mark : " << StudentMarks[i] << "% \n";
		ToTalMark += StudentMarks[i];

		if (i == Count - 1)
		{
			cout << "\nThe Class average is : " << ToTalMark / Count << "%";
			if (ToTalMark/Count > 90)
			{
				cout << "\nPlease note the class is in the top 10% nationwide\n";
			}
			else if (ToTalMark / Count > 80) {
				cout << "\nPlease note the class is in te top 20% nationwide\n";
			}
			else {
				cout << "\n";
			}

		}
	}

	


	return 0;
}
