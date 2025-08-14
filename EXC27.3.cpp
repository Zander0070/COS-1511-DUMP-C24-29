#include <iostream>
#include <string.h>
#include <string>


using namespace std;

int main()
{
    cout << "Hello World!\n";
    string Sentence, WordS, WordP, NewSentence = "";
    int SentenceLength = 0,Counter = 0;

    cout << "Enter a sentence : ";
    getline(cin, Sentence);
    cout << "\nEnter a word to search for : ";
    getline(cin, WordS);
    cout << "\nEnter a word to replace it with : ";
    getline(cin, WordP);

    

    SentenceLength = Sentence.length();

    for (int I = 0; I < SentenceLength; I++) {
        if (Sentence[I] == WordS[Counter])
        {
            Counter++;
             if (Counter == WordS.length()) {
                 NewSentence += WordP;
                Counter = 0;
            }
        }else {
            if (Counter > 0) {
                NewSentence += WordS.substr(0, Counter);
                Counter = 0;
            }
            NewSentence += Sentence[I];
        }
    }

    if (Counter > 0) {
        NewSentence += WordS.substr(0, Counter);
    }

    cout << "The new setence is : " << NewSentence;

    return 0;

}


