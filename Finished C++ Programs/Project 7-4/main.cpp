#include <iostream>
using namespace std;

double get_celsius()
{
    double celsius_in;

    cout << "Enter the temperature in Celsius: ";
    cin >> celsius_in;
    return celsius_in;
}

int main()
{
    double celsius;
    celsius = get_celsius();
    cout << "You input this for Celsius: " << celsius << '\n';
}
