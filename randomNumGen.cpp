/*
Author: Kathy / 39sinq
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    // Changes random number every time program runs
    srand(time(0));

    // Initialize variables
    int max = 10;
    int min = 0;
    int num = rand() % (max-min+1)+min;

    cout << "You have five tries to guess the number." << endl;

    for(int i = 0; i < 5; i++)
    {
        int guess;
        cout << "Guess the random number from 0-10: ";
        cin >> guess;
        
        if(guess == num)
        {
            cout << "That's correct!"<< endl;
            return 0;
        }else{
            cout << "Try again." << endl;
        }
    }
    cout << "Sorry! You lost. The number was " << num << ".";
    return 0;
}