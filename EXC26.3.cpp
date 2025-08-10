#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;



int main() {

    string grid[6][10] = {
      {" ", "1", "2", "3", "4", "5", "6", "7", "8", "9"},
      {"A", "-", "-", "-", "-", "-", "-", "-", "-", "-"},
      {"B", "-", "-", "-", "-", "-", "-", "-", "-", "-"},
      {"C", "-", "-", "-", "-", "-", "-", "-", "-", "-"},
      {"D", "-", "-", "-", "-", "-", "-", "-", "-", "-"},
      {"E", "-", "-", "-", "-", "-", "-", "-", "-", "-"}
    };

    cout << "Please see below for seeting plank\n";

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 10; j++) {
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
    
    bool stop = false;

    while (stop == false) {

        cout << "In which row do you want Seats? (A-E): ";
        string Answer;
        int Row = 0;
        cin >> Answer;

        if (Answer == "A" || Answer == "a") {
            Row = 1;
        }
        else if (Answer == "B" || Answer == "b") {
            Row = 2;
        }
        else if (Answer == "C" || Answer == "c") {
            Row = 3;
        }
        else if (Answer == "D" || Answer == "d") {
            Row = 4;
        }
        else if (Answer == "E" || Answer == "e") {
            Row = 5;
        }
        else {
            cout << "Please enter a valid answer next time";
        }

        cout << "Staring at which number? ";
        int column = 0;
        cin >> column;

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 10; j++) {
                if (Row == i) {
                    if (column == j) {
                        if (grid[i][j] == "X") {
                            cout << "Please note that seat has been reserved, please pick again";
                        }
                        else {
                            grid[i][j] = "X"; // Mark the seat as taken
                        }


                    }
                }
            }


            cout << endl;
        }

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 10; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }

		cout << "Do you want to continue? (Y/N): ";
		char choice;
		cin >> choice;
		if (choice == 'N' || choice == 'n') {
			stop = true; // Exit the loop
		}
		else if (choice == 'Y' || choice == 'y') {
			stop = false; // Continue the loop
		}
		else {
			cout << "Invalid choice, please enter Y or N." << endl;
		}
    }
	
    return 0;
}
