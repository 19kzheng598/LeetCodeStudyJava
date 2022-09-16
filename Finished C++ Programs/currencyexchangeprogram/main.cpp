#include <iostream>
#include <string>

using namespace std;

int main()
{
    string i;
    string yesno;
    long double us;
    long double exchange_euros = .90;
    long double exchange_pounds = .80;
    long double exchange_rupee = 13.14;
    long double exchange_yuan = 6.82;
    long double exchange_peso = 18.82;
    long double exchange_albanianlek = .0084;
    long double equalto;

    do{

    cout << "Enter Euros, Pounds, Yuans, Albanian Lek, Pesos, or Rupees." << '\n';
    getline(cin, i);


    if (i == "Euros")
    {
        cout << "Enter in the number of U.S. dollars you want to convert into Euros" << '\n';
        cin >> us;

        equalto = us*exchange_euros;

        cout << "Here are your Euros: " << equalto << " Euros" << '\n';


    }
    if (i == "Pounds")
       {

        cout << "Enter the number of U.S. dollars you want to convert into Pounds" << '\n';
        cin >> us;

        equalto = us*exchange_pounds;

        cout << "Here are your Pounds: " << equalto << " Pounds" << '\n';
       }
    if (i == "Rupees")
    {
        cout << "Enter the number of U.S. dollars you want to convert into Rupees" << '\n';
        cin >> us;

        equalto = us*exchange_rupee;

        cout << "Here are your Rupees: " << equalto << " Rupees" << '\n';
    }
    if (i == "Yuans")
    {
        cout << "Enter the number of U.S. dollars you want to convert into Yuans" << '\n';
        cin >> us;

        equalto = us*exchange_yuan;

        cout << "Here are your Yuans: " << equalto << " Yuans" << '\n';
    }

    if (i == "Pesos")
    {
        cout << "Enter the number of U.S. dollars you want to convert into Pesos" << '\n';
        cin >> us;

        equalto = us*exchange_peso;

        cout << "Here are you Pesos: " << equalto << " Pesos" << '\n';
    }

    if(i == "Albanian Lek")
    {
        cout << "Enter the number of U.S. dollars you want to convert into Pesos" << '\n';
        cin >> us;

        equalto = us*exchange_albanianlek;

        cout << "Here are your Lek's: " << equalto << " Albanian Lek's" << '\n';
    }


    cout << "Do you want to convert again? " << '\n';
    cin >> yesno;

    }
    while(yesno == "Yes");
        return 0;
}

