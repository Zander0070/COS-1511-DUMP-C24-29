#include <iostream>
#include <string.h>
#include <string>

using namespace std;

struct MyStruct
{
	string title, Director, MainActors;
	int Year;
};


int main() {

	string Directors[10];
	string Actors[10];
	bool Stop = false;

	MyStruct p1;
	int Conter = 0;
	string Answer = "";

	cout << "Enter the Title of the Movie : ";
	getline(cin, p1.title);
	cout << "\n Who was the Director : ";
	getline(cin, p1.Director);

	cout << "\nIn What year was the movie shot : ";
	cin >> p1.Year;
	cin.ignore();


	while (Stop == false)
	{
		cout << "List Actor number " << Conter + 1 << " : ";
		getline(cin, p1.MainActors);
		Actors[Conter] = p1.MainActors;	
		Conter++;

	
		cout << "\nWuld you like to continue (Y/N ) : ";
		getline(cin, Answer);

		if (Answer == "Y")
		{
			Stop = false;
			Answer = "";
		}
		else if (Answer == "N") {
			Stop = true;
			Answer = "";

		}
		else {
			Stop = true;
			Answer = "";
		}

		


	}

	cout << "\n-----------------------------";
	cout << "\nMovie Info: \n" << "Title : " << p1.title << "\nDirector " << p1.Director << "\nYear : " << p1.Year;
	for (int i = 0; i < 5; i++)
	{
		cout << "\nActor " << i + 1 << " : " << Actors[i];

	}

	for (int i = 0; i < Conter; i++)
	{

		if (Actors[i] == p1.Director)
		{
			cout << "\nPlease note that " << Actors[i] << " is also a Director";
		}

	}

	return 0;

}
