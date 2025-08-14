#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
	string Fullname,BlankSpace = " ";
	string InitalStorage[100];
	int LengthOfName = 0, Counter = 0,SecondCounter = 0;

	

	cout << "Enter your full gov name : ";
	getline(cin, Fullname);
	Fullname = " " + Fullname;

	LengthOfName = Fullname.length();

	for (int I = 0; I < LengthOfName; I++) {
		SecondCounter++;
		if (Fullname[I] == BlankSpace[0])
		{
			InitalStorage[Counter] += Fullname[SecondCounter];
				Counter++;
		}

	}

	for (int i = 0; i < 10; i++)
	{
		cout << InitalStorage[i];
	}
	
	return 0;

}
