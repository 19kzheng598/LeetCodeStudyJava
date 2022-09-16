#include <iostream>

using namespace std;

int main()
{
    //Declaration
     int x;
     cout << "Output a number: ";
     cin >> x;

     switch(x){

     case 1:
         cout << "Hello 1st choice" << endl;
         break;

     case 2:
        cout << "Hello 2nd choice" << endl;
        break;

     case 3:
        cout << "Hello 3rd choice" << endl;
        break;

     default:
        cout << "Random choice" << endl;
        break;

     }

    return 0;
}
