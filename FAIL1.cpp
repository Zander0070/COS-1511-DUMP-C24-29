#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

void IsValueInArray(int num) {
	int numbers[10] = { 5, 12, 7, 25, 48, 19, 33, 2, 14, 99 };
	bool Found = false;

	for (int i = 0; i < 10; i++) {
		if (num == numbers[i]) {
			Found = true;
		}
		else {
			Found = false;
		}
	}

	if (Found = true) {
		cout << "The number " << num << " is in the array." << endl;
	}
	else {
		cout << "The number " << num << " is not in the array." << endl;
	}

}

int SmallestValue() {
	int numbers[10] = { 5, 12, 7, 25, 48, 19, 33, 2, 14, 99 };
	int Smallest = 101;

	for (int I = 0; I < 10; I++) {
		if (numbers[I] < Smallest) {
			Smallest = numbers[I];

		}
	}

	return Smallest;

}

void ReverseArray(int Input[],int length, int output[]) {
	

	
	for (int I = 0; I < 10; I++) {
		output[length] = Input[I];
		length--;
		cout << output[length];
	}

}

int main() {
	int Input = 0;
	int numbers[10] = { 5, 12, 7, 25, 48, 19, 33, 2, 14, 99 };
	int ReverseArr[10];
	cout << "For What number are you searching for : ";
	cin >> Input;

	IsValueInArray(Input);
	int SmallestNum = SmallestValue();
	cout << SmallestNum;
	return 0;

	ReverseArray(numbers, 9, ReverseArr);
	cout << "Reversed array: ";
	for (int i = 0; i < 10; i++) {
		cout << ReverseArr[i] << " ";
	}



}
