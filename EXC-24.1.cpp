#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {
	int DataSet[10] = { 10,3,56,7,0,5,44,99,76,1 };
	int DataSet2[10] = { 10,3,56,7,0,5,44,99,76,1 };
	int Highest = 0, Lowest = 100;
	int Swapplocation = 0, Swappedlocation2 = 0;;

	for (int i = 0; i < 10; i++) {
		cout << DataSet[i] << ", ";
	}

	for (int I = 0; I < 10; I++) {
		
		if (DataSet[I] > Highest) {
			Highest = DataSet[I];
			Swapplocation = I;
		}
		

	}

	DataSet[Swapplocation] = 10;
	DataSet[0] = Highest;

	cout << "\n" << Highest << "\n" << Swapplocation << "\n";
	
	for (int i = 0; i < 10; i++) {
		cout << DataSet[i] << ", ";
	}

	return 0;
}
