//passing by value
#include <iostream>
using namespace std;
void print_value(int j); //this is the function prototype

int main()
{
   int i = 2;
   cout << "The value before the function is " << i << endl;
    print_value(i);
   cout << "The value after the function exits is " << i << endl;

}

void print_value(int j)
{
    cout << "The value passed to the function is " << j << endl;
    j = j * 2; //the value in the variable i is doubled
    cout << "The value at the end of the function is " << j << endl;
}

