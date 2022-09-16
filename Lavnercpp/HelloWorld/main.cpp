//Written by Kevin
//7/5/21
//Demonstrating cpp
//GNU GCC compiler cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    //declaration variable
    int a = 0;
    int b = 1;
    int c = 2;
    double aDouble = 1.2;
    char singleLetter = 'a';
    bool myBoolean = true; //True exclusive or (xor) False
    int x;
    int sum;
    string firstString = "Wow it's my first string";
    //declaration variable

    //input
    cout << "input something pls: ";
    cin >> x;
    //input

    //output
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << aDouble << " this is cool." << endl;
    cout << b + c << endl;
    cout << "Integer x is: " << x << endl;
    sum = c + b;
    cout << "Sum is: " << sum << endl;
    cout << firstString << endl;
    //output

    return 0;
}

