#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
	string Sentence,BlankSpace = " ";
	string WordHolder[100];
	int Sentencelength = 0, Conter = 0,StartIndex = 0;


	cout << "Enter sentence : ";
	getline(cin, Sentence);
	Sentencelength = Sentence.length();

	for (int i = 0; i < Sentencelength; i++)
	{
		if (Sentence[i] == BlankSpace[0])
		{
			WordHolder[Conter] = Sentence.substr(StartIndex, i - StartIndex);
			Conter++;
			StartIndex = i + 1;
			
		}
	}

	for (size_t i = 0; i < 20; i++)
	{
		cout << WordHolder[i] << "\n";
	}

	return 0;
}
