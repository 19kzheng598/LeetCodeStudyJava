#include <iostream>

using namespace std;

int main()
{
    //Declaration
    int x = 10;
    int y = 11;
    int time = 22;
    //Declaration

    //The if statement
    if(20 > 18){
        cout << "True" << endl;
    }

    if(y > x){
        cout << "hello" << endl;
        if(x > y){

        }
        else {
        cout << "Not true" << endl;
        }
    }


    //else if statement
    if(time < 10){
        cout << "never run" << endl;
    }

    else if(time == 22){
        cout << "Time does equal to 22" << endl;
        time = 50;
    }

    else {
      cout << "Wow, time is " << time << " now!" << endl;
    }


    //while statement
    int i = 0;
    while(i < 5){
        cout << i << endl;
        ++i;
    }
    cout << endl;
    //for statement
    for(int j = 5; j > 0; j--){
        cout << j << endl;
    }

    //+= -= /= *= ops
    cout << endl;
    int z = 1;
    z += 5;
    cout << z << endl;
    return 0;
}
