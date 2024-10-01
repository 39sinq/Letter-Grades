/*
Author: Kathy / 39sinq

Simple calculator
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // User input
    double firstNum, secondNum;
    string operation;

    cout << "Enter first number: ";
    cin >> firstNum;
    cout << "Enter operation: ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> secondNum;

    // Calculation
    if(operation == "+")
    {
        cout << firstNum + secondNum;
    }else if(operation == "-")
    {
        cout << firstNum - secondNum;
    }else if(operation == "*")
    {
        cout << firstNum * secondNum;
    }else if(operation == "/")
    {
        cout << firstNum / secondNum;
    }

    return 0;
}