/*
Author: Kathy / 39sinq

WIP
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "This to-do list can only hold 10 tasks." << endl;
    string list[10];

    string input;
    cin.ignore(); // clears buffer of getline capturing empty line

    int currentIndex = 0;

    while(true)
    {
        cout << "Would you like to add or remove tasks: ";
        cin >> input;
        cin.ignore();

        // Adding tasks
        if(input == "add" || input == "Add")
        {
            if(currentIndex < 10)
            {
            string task;
            cout << "Please enter the task: ";
            getline(cin, task);
            list[currentIndex] = task;
            currentIndex++;

            // If full
            if(currentIndex == 10)
            {
                cout << "The list is full." << endl;
                break;
            }
            }else{
                cout << "Task list full.";
            }

            // Continue ?
            if(currentIndex < 9)
            {
                cout << "Would you like to add or remove another task? ";
                cin >> input;
                cin.ignore();
                if(input == "No" || input == "no")
                {
                    break; // Exit loop if not continuing
                }else if(input == "Remove" || input == "remove")
                {
                    string taskRemove;
                    cout << "Which task would you like to remove? " << endl;
                    getline(cin, taskRemove);
                    for(int i = 0; i < 10; i++)
                    {
                        cout << list[i] << endl;
                    }
                    bool found = false;
                    for(int i = 0; i < 10; i++)
                    {
                        if(list[i] == taskRemove)
                        {
                            found = true;
                            for(int j = i; j < 9; j++)
                            {
                                list[j] = list[j + 1];
                            }
                            list[9] = "";
                            break;
                        }
                    }
                }

            }
        }
    }

    // Displaying tasks
    string yNo;
    cout << "Would you like to display your tasks?";
    cin >> yNo;
    if(yNo == "Yes" || yNo == "yes")
    {
        for(int i = 0; i < 10; i++)
        {
            cout << list[i] << endl;
        }
    }


    return 0;


}