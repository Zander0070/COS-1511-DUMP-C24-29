#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {
	
	float NormalArray[10];
	float Input = 0;


	for (int i = 0; i < 10; i++) {
		cout << "Please enter a floating value : ";
		cin >> Input;
		NormalArray[i] = Input;

	}

	for (int a = 9; a > -1; a--) {
		cout << NormalArray[a] << ", ";
	}

	return 0;
}
