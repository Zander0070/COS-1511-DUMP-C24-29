#include <iostream>
#include <cstdlib> 
using namespace std;



int main() {

    int rainfall[6][12] = {
        {23, 45, 12, 34, 20, 25, 30, 28, 15, 10, 5,  0},
        {5,  0,  8,  2,  10, 12, 15, 7,  6,  3,  1,  0},
        {30, 22, 19, 25, 35, 40, 38, 32, 28, 25, 20, 18},
        {12, 15, 10, 5,  8,  7,  6,  12, 14, 10, 8,  5},
        {0,  0,  3,  0,  2,  4,  5,  66,  0,  1,  0,  0},
        {20, 18, 15, 22, 25, 30, 28, 27, 26, 24, 22, 20}
    };

    int TotalRainFall = 0, AvgRainMonth = 0, AvgRainFallYear = 0,AnualRainFall = 0;
    int LargestRainMonth = 0;

    for (int I = 0; I < 6; I++) {
        for (int J = 0; J < 12; J++) {
            AnualRainFall = AnualRainFall + rainfall[I][J];
            if (LargestRainMonth < rainfall[I][J]){   
                LargestRainMonth = rainfall[I][J];
            }

        }
		TotalRainFall += AnualRainFall;
        AvgRainMonth = AnualRainFall / 12;
        cout << "Please note for year : " << I + 1 << " The average rain fall was : " << AvgRainMonth << "mm\n";

        AvgRainFallYear = 0;
        AnualRainFall = 0;

    }
    cout << "\n-----------------------------------\n";
    cout << "\n\nPlease note the total rainfall between the year 2000 and 2005 was " << TotalRainFall << " mm";
    cout << "\nThe most rainfall we ever had in a singular month was " << LargestRainMonth  << " mm";
    

}
