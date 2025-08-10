#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {

	int Motors[5][6] = {
  {90, 94, 102, 111, 122, 134},
  {77, 80, 86, 94, 103, 113},
  {65, 68, 73, 80, 88, 97},
  {55, 58, 62, 68, 75, 83},
  {45, 48, 52, 57, 63, 70} };

	int TOTALSpeed = 0, AvgSpeed = 0;


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			TOTALSpeed = Motors[i][j] + TOTALSpeed;
		}
		AvgSpeed = TOTALSpeed / 6;
		cout << "Please note for car " << i << ", the avg speed was " << AvgSpeed << "km/h\n";
		AvgSpeed = 0;
		TOTALSpeed = 0;
	}

	return 0;
};
