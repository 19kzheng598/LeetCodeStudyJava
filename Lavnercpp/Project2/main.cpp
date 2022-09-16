#include <iostream>

using namespace std;

class Game{

public:
    //Running mostly in here
    //Constructor
    Game(){
        cout << "You encounter a bear in the woods, and you can choose what happens." << endl;
        cout << "1. RUN!" << endl;
        cout << "2. Use bear spray on its eyes." << endl;
        cout << "3. Poke it with a stick." << endl;
        choice = getInput(3);

        switch(choice){
        case 1:
            cout << "The bear mauls you." << endl;
            playAgain();
            break;

        case 2:
            returnHome();
            break;

        case 3:
            cout << "The bear mauls you." << endl;
            playAgain();
            break;

        }

    }

private:
    //adding variables here only access in Game class
    int choice;

private:
    //add methods like functions that we can call inside the game
    void returnHome(){
        cout << "You walk slowly back down the trail you came from. Eventually you arrive home, safe and sound. You return to your ordinary life: it is safe, but ultimately meaningless and lacking in bears. The day ends and you go to sleep wondering what would have happened if you had been a more interesting and adventurous person. The next day passes and then the next. One week. Then another. The weeks blend to months and then years. The world changes, but you do not. You are still the same boring person who took the easy way out. You grow old and eventually the day comes when you are ready to give up your dull ways and prepare for whatever comes after this life. You hope it involves more bears." << endl;

    }

    void playAgain(){
        cout << endl;
        cout << "Play again?" << endl;
        cout << "1. Yes." << endl;
        cout << "2. No." << endl;
        choice = getInput(2);

        switch(choice){
            case 1:
                new Game();

        }

    }

    int getInput(int numChoices){
        while(true){
            int input = 0;
            cout << "Input a number: ";
            cin >> input;
            cin.get();

            if(cin.fail()){
                cout << "Not a number, please enter a number: " << endl;
                cin.clear();
                cin.ignore(256, '\n');
            }
            else{
                if(input > 0 && input <= numChoices){
                    return input;
                }
                else{
                    cout << "Please enter a number between 1 and " + to_string(numChoices) << endl;
                }
            }
        }
    }
};



int main()
{
    new Game();
    cout << "Press enter to end game." << endl;
    return 0;
}
