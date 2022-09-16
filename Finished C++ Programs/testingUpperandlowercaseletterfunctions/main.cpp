#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{

    char c;
    cout << "Enter in 0 to stop the program," << '\n';
    cin >> c;


    if(isalpha(c))
    {
        if(isupper(c))
        {
            cout << c << " is an uppercase letter" << endl;
        }
        else
        {
            cout << c << " is a lowercase letter" << endl;
        }
    }

if (isdigit(c))
{
    cout << c << " is a digit" << endl;
}

if(!(isdigit(c)||isalpha(c)))
{
    cout << c << " is neither a digit or a letter" << endl;

}

return 0;
}


// The asterisk mean it does not have to be included. It is just an example for the description.

/*  Function                          Prototype                                           Description

    isupper                           *int* isupper(*int* c)                                 Determines if a character is uppercase

    islower                           *int* islower(*int* c)                                 Determines if a character is lowercase

    isalpha                           *int* isalpha(*int* c)                                 Determines if a character is a letter (a-z, A-Z)

    isdigit                           *int* isdigit(*int* c)                                 Determines if a character is a digit (0-9) (TIP: BECAUSE ITS ONLY A CHAR "Only ONE value")

    toupper                           *int* toupper(*int* c)                                 Converts a character to uppercase

    tolower                           *int* tolower(*int* c)                                 Converts a character to lowercase

*/


//Use the semi colin if you are converting something to something. Such as a uppercase letter to a lowercase letter.

