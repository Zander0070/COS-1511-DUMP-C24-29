#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {
	double StockArray[5] = {7.7,2.2,5.5,10,22};
	cout << "Would you like to see the stock prices or Total sales? (1/2)";
	int Option = 0;

	cin >> Option;

	if (Option == 1) {
		cout << "Please enter a stock number (0-4): ";
		int Choice = 0;
		cin >> Choice;
		if (Choice >= 0 && Choice < 5) {
			cout << "The stock price is: R" << StockArray[Choice] << endl;
		}
		else {
			cout << "Invalid stock number. Please enter a number between 0 and 4." << endl;
		}
	}
	else if (Option == 2) {
		//double ItemNmr = 0;
		double TotalProfit = 0;

		for (int I = 0; I < 5; I++) {
			int ItemNmr = rand() % 5;
			TotalProfit = TotalProfit + StockArray[ItemNmr];
			cout << "ITEM : " << ItemNmr << "| R" << StockArray[ItemNmr] << "\n";
		}

		cout << "\nTOTAL : R" << TotalProfit << endl;
		
	}
	else {
		cout << "Please enter a valid input next time.\n";
	}

}
