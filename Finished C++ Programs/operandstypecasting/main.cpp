#include <iostream>

using namespace std;

//typecasting     //float        double      long double

int main()
{
    int j;
    float k;
    float s;

    long double THEDECIMAL;

    cout << "Enter in three integers: " << '\n';
    cin >> j;
    cin >> k;
    cin >> s;



    THEDECIMAL = (j / s) * k;

    cout << THEDECIMAL << '\n';

    return 0;



}



