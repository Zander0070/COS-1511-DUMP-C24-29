#include <iostream>
#include <cstdlib> // For rand() and srand()
using namespace std;

int main() {

    bool PostBoxes[50] = {
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false,
        false, false, false, false, false, false, false, false, false, false
    };


    for (int I = 0; I < 50; I++) {
        if (I % 2 == 0) {
            PostBoxes[I] = true;
        }
    }

    for (int I = 0; I < 50; I++) {
        if (I % 3 == 0) {
            if (PostBoxes[I] == true) {
                PostBoxes[I] = false;
			} else if (PostBoxes[I] == false) {
				PostBoxes[I] = true;
			}
        }
    }


    for (int I = 0; I < 50; I++) {
        if (I % 4 == 0) {
            if (PostBoxes[I] == true) {
                PostBoxes[I] = false;
            }
            else if (PostBoxes[I] == false) {
                PostBoxes[I] = true;
            }
        }
    }

    for (int I = 0; I < 50; I++) {
        if (PostBoxes[I] == 1) {
            cout << "True\n";
        }
        else
        {
            cout << "False\n";
        }
    }

}
