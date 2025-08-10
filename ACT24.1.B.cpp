#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {
	int RandomNumberStorage[15];

	for (int I = 0; I < 15; I++) {
		int Randomnumber = 0;
		Randomnumber = rand() % 1000;
		RandomNumberStorage[I] = Randomnumber;

		cout << "Random number " << I + 1 << " is : " << RandomNumberStorage[I] << "\n";
	}
	return 0;
}
