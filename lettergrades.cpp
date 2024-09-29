/*
Author: Kathy / 39sinq

Translates letter grade to numerical value
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // User input
    string lettGrade;
    cout << "Enter a letter grade: ";
    cin >> lettGrade;

    // Extracting letter and + or -
    char letter = lettGrade[0];
    string plusMinus = lettGrade.length() == 2 ? lettGrade.substr(1) : "";

    // Determining base numeric value
    double numGrade;
    switch(letter)
    {
        case 'A':
            numGrade = 4;
            break;
        case 'B':
            numGrade = 3;
            break;
        case 'C':
            numGrade = 2;
            break;
        case 'D':
            numGrade = 1;
            break;
        case 'F':
            numGrade = 0;
            break;
    }

    // + or -
    if(plusMinus == "+")
    {
        if(letter != 'A')
        {
            numGrade += 0.3;
        }
    }else if(plusMinus == "-")
    {
        numGrade -= 0.3;
    }

    // if A+
    if(lettGrade == "A+")
    {
        numGrade = 4.0;
    }

    if(lettGrade == "F")
    {
        numGrade = 0.0; 
    }

    cout << "The numeric value is " << numGrade << "." << endl;

    return 0;
}
