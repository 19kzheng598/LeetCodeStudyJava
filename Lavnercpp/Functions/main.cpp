#include <iostream>
#include <string>
using namespace std;

//Function declarations always come before int main()
void myOutputCall(string poop){ //This outputs a cout statement //poop = inputString;
    string example = "hello ";
    cout << "You called this function!" << endl;
    cout << endl;
    cout << "You outputted: " << poop << endl;
    example += poop; //Just manipulating text for fun using the poop argument.
    cout << endl;
    cout << example << endl;

}

void twoOrMoreArgs(string name, string age){
    cout << "Your name: " << name << endl;
    cout << "Your age: " << age << endl;
}

int additionFive(int number){

    return 5 + number;
}


int main()
{
    //Declaration
    string inputString;
    string age;
    int x;
    cout << "Input your name: ";
    getline(cin, inputString); //getline converts everything to string
    cout << endl;

    cout << "Input your age: ";
    getline(cin, age);

    cout << "Enter a number: ";
    cin >> x;

    //Function calling
    myOutputCall(inputString);

    twoOrMoreArgs(inputString, age);
    /*
    Passing by value
    does not change
    the variable that is being passed.
    */
    cout << additionFive(x) << endl;
    int sum = additionFive(x);
    cout << sum << endl;

    return 0;

}


