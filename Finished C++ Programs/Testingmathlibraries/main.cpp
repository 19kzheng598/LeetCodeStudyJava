#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    double base;
    double exponent;
    double answer;

    cout << "Enter the base: ";  //Input d base
    cin >> base;

    cout << "Enter the exponent: "; //Input d exponent
    cin >> exponent;

    answer = pow(base, exponent);

    cout << "The answer is: " << answer << '\n';
    return 0;
}

// The asterisk mean it does not have to be included. It is just an example for the description.


/*  Function         Prototype                                  Description

    abs              *int* abs (x);                              Returns the absolute value of a integer

    labs             *long* int labs (x);                        Returns the absolute value of a long integer (TIP: There is such thing as unsigned long long int which makes it even LARGER)

    fabs             *double* fabs (x);                          Returns the absolute value of a floating point number

    ceil             *double* ceil (x);                          Returns a rounded up whole number

    floor            *double* floor (x);                         Returns a rounded down whole number

    hypot            *double* hypot (a,b);                       Returns the calculated value of the hypotenuse (c) of a right triangle. (EXAMPLE: c^2 = a^2 + b^2) (TIP: ITS PYTHAGOREOEOSOSOS)

    pow              *double* pow (x,y);                         Returns the value x to the y power

    pow10            *double* pow10 (x,y);                       Returns the value of x with the power 10

    sqrt             *double* sqrt (x);                          Return the square root of x
*/


