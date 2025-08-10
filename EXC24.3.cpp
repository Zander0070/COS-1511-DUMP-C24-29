#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {

	int arr1[20] = { 14, 87, 23, 65, 2, 91, 48, 77, 34, 50, 6, 99, 12, 71, 43, 56, 80, 8, 29, 95 };

	int arr2[20] = { 99, 95, 91, 87, 80, 77, 71, 65, 56, 50, 48, 43, 34, 29, 23, 14, 12, 8, 6, 2 };
	bool Descending = false;

	for (int I = 0; I < 20; I++) {
		if (arr2[I] > arr2[I + 1]){
			Descending = true;
			
			
		}
		else {
			Descending = false;
		}
	}

	if (Descending = false) {
		cout << "this array is not sorted in descending order" << endl;
	}
	else {
		cout << "this array is sorted in descending order" << endl;
	}

	return 0;
}
