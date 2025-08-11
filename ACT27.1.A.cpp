#include <iostream>
#include <cstdlib> 
using namespace std;



int main() {

	string Word;
	string arrWord[100];
	string arrWord2[100];
	cout << "Please enter the word : ";
	cin >> Word;

	int wordLength = 0;
	wordLength = Word.length();

	for (size_t i = 0; i < wordLength; i++)
	{	
		arrWord[i] = Word[i];
		arrWord2[i] = Word[wordLength - i - 1];
	}

	bool Paladrome = false;

	for (int I = 0; I < wordLength; I++) {
		if (arrWord[I] == arrWord2[I]) {
			Paladrome = true;
		}
		else {
			Paladrome = false;
			break;
		}
		
	}

	if (Paladrome == true) {
		cout << Word << " is a Paladrome";
	}
	else {
		cout << Word << " is not a paladrome";
	}


	
}
