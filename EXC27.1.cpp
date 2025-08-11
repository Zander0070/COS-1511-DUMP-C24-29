#include <iostream>
#include <cstdlib> 
#include <string>
#include <string.h>
#include <vector>

using namespace std;


void TheUpperFuct(string setence) {
	int len = setence.length();
	string NewSentence[1000];

	for (int i = 0; i < len; i++) {
		if (setence[i] >= 'a' && setence[i] <= 'z') {
			NewSentence[i] = setence[i] - 32; 
		}
		else {
			NewSentence[i] = setence[i]; 
		}
	}

	for (int i = 0; i < len; i++) {
		cout << NewSentence[i];
	}
}

int main() {

	string sentence;
	cout << "Please enter a sentence : ";
	getline(cin, sentence);

	TheUpperFuct(sentence);

}
