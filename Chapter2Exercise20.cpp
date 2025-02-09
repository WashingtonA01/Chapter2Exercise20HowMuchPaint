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

    double fenceheight, fencelength, coats; 
    double ftpergallon = 340;

    cout << "How many feet per gallon does the paint cover? " << ftpergallon << endl;
    cout << "How many feet long is your fence? " << endl;
    cin >> fencelength;
    cout << "How many feet tall is your fence? " << endl;
    cin >> fenceheight;
    cout << "How many coats will you use? " << endl;
    cin >> coats;
    double gallonstotal = (fenceheight * fencelength * coats) / ftpergallon;
    cout << "You will need this many gallons of paint to paint the fence: " << gallonstotal;
    


    
}

