#include <iostream>
using namespace std;
void print_warning();
void print_okay();

int main()
 {


  double miles_remaining, fuel_remaining, mpg, fuel_miles;
   cout << "How many miles are you from the next gas station? ";
  cin >> miles_remaining;
  cout << "How much fuel do you have left (in gallons)? ";
  cin >> fuel_remaining;
  cout << "What is your average miles to the gallon? ";
  cin >> mpg;
  fuel_miles = fuel_remaining * mpg;

if (fuel_miles < miles_remaining )
{
    void print_warning();
    {
        cout << "You're bad on gas. You won't make it" << '\n';
    }

}
else
{
    void print_okay();
    {
        cout << "You're good on gas. You will make it" << '\n';
    }
}

return 0;
 }

 void print_warning()
 {

 }
 void print_okay()
 {

 }

