#include <iostream>
#include <cstdlib> 
#include <string>
#include <string.h>

using namespace std;

int main() {

	string NewSentence[100] ;
	string Sentence, word = "The";

	cout << "Enter a sentence: ";
	getline(cin, Sentence);

	if (Sentence.find(word) == 0) {
		Sentence.erase(0, word.length());
		Sentence.append(", " + word);
		cout << Sentence;
	}
	else {
		cout << "The word '" << word << "' is not found in the sentence." << endl;
	}
	
	return 0;

}
