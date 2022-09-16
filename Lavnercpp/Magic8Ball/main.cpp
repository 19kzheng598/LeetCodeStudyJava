#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    //declaration
    srand(time(NULL));
    bool flag = true;

   //While loop
   while(flag){
    int random = rand()%6;
    int answer;

    //if statements
    if(random == 0){
        cout << "Nothing" << endl;
    }

    else if(random == 1){
        cout << "Eat breakfast" << endl;
    }

    else if(random == 2){
        cout << "You are a winner today" << endl;
    }

    else if(random == 3){
        cout << "You are a loser today" << endl;
    }

    else if(random == 4){
        cout << "This is sparta" << endl;
    }

    else if(random == 5){
        cout << "Watch your step" << endl;
    }

    cout << endl;

    cout << "Would you like to ask again?" << endl;
    cout << "1 for yes" << endl;
    cout << "0 for no" << endl;

    string answerString;
    getline(cin, answerString);
    answer = stoi(answerString);

    if(answer != 1){
        flag = false;
    }

   }
    return 0;
}
