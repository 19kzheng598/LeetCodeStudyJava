#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    char c;
    do
    {
    cout << "Enter a single character: ";
    cin >> c;


        if (isalpha(c))
        {
            if (isupper(c))
            {
                cout << "Character is supposed to be lowercase: ";
                c = (tolower(c));
                cout << c << '\n';
            }
            else
            {
                cout << "Character is supposed to be uppercase: ";
                c = (toupper(c));
                cout << c << '\n';
            }
        }

}
    while (isdigit(c));
    return 0;

}

