/*
By Kevin Zheng.
7/8/21.
Program takes in players and keeps track of their points.
GNU GCC Compiler Codeblocks IDE C++.
NOT COMPLETE. Still needs error checking.
*/
#include <iostream>
#include <string>

using namespace std;



int main(void)
{
    //GLOBAL SCOPE, all loops and other boxes can use these.
    //Declaration variables w cout & cin.
    int playerNumber;
    string playerNames;
    bool flag = true;

    cout << "How many players are there? Max players 100: ";

    //Error checks for values above and below the player count.
    while(flag){

        cin >> playerNumber;

        if(playerNumber < 0 || playerNumber > 101){
            cout << "Player count cannot be negative or greater than 100." << endl;
        }

        else{
            cout << endl;
            flag = false;
        }

    }
    //Array Declaration.
    string playerList[100]; //Static Array. 100 players max.
    int points[100]; //Static Array. 100 values max.
    //GLOBAL SCOPE, all loops and other boxes can use these.

    //Assign everything to zero first so that there are no random numbers.
    for(int i = 0; i < 100; i++){
        points[i] = 0; //IMPORTANT TO DO THIS ALWAYS.
    }


    //Assigning values to arrays now.
    cout << "Enter the players names: " << endl;

    //Assigns player name to each row.
    for(int i = 0; i < playerNumber; i++){
        cin >> playerNames;
        playerList[i] = playerNames; //Assigns players name to the array.
        cout << "Player " << i + 1 << ": " << playerList[i] << endl;
    }

    flag = true; //Line 34 is false so we set this to true again so while line 60 runs.
    while(flag){
        //LOCAL VARIABLES.
        int choice; //Always reverts back to zero to prevent addition error.
        int pointsValue; //Always reverts back to zero to prevent addition error.
        //LOCAL VARIALES.

        cout << "Press 0 to end game, if not, enter player number: " << endl;
        cin >> choice;

        if(choice == 0){ //Exit out of the while loop.
            flag = false;
        }

        else if(choice < 0 || choice > playerNumber){
            cout << "Choice is less than 0 or greater than player count. Try again." << endl;
        }

        else{
            cout << "Enter points: " << endl;
            cin >> pointsValue;
            cout << endl;
            points[choice - 1] += pointsValue; //Assigns points to points array.
        }

    }

    cout << endl;
    cout << "END OF JEOPARDY. HERE ARE THE POINTS!!!" << endl;
    cout << endl;

    //Current points for each player.
    //Shows their name and points.
    for(int i = 0; i < playerNumber; i++){
       int totalPoints = points[i];
       string playerName = playerList[i];
       cout << playerName << " points: " << totalPoints << endl;
    }

    return 0;
}
