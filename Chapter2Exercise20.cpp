/*
 Filename: Chapter2Exercise20.cpp
 Programmer: Arianna Washington
 Date: 09FEB2025
 Requirements: A particular brand of paint covers 340 square feet per gallon. Write a program to determine and
report approximately how many gallons of paint will be needed to paint two coats on a wooden
fence that is 6 feet high and 100 feet long.
*/

#include <iostream>

using namespace std;

int main()
{
    double ftpergallon = 340;
    double fenceheight = 6;
    double fencelength = 100;
    double coats = 2;
    double gallonstotal = (fenceheight * fencelength * coats) / ftpergallon;

    cout << "How many feet per gallon does the paint cover? " << ftpergallon << endl;
    cout << "How many feet total is the fence? " << fenceheight * fencelength << endl;
    cout << "How many coats will you use? " << coats << endl;
    cout << "You will need this many gallons of paint to paint the fence: " << gallonstotal;



    
}

