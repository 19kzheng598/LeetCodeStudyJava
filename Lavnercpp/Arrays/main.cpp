#include <iostream>

using namespace std;

//Function declaration
int oldest(int ages[], int size);

int main()
{
    //Declaration
    int ages[10] = {21, 3, 5, 51, 13, 5, 2, 8, 10, 7};
    cout << "value before change" << endl;

    //Loops
    for(int i = 0; i < 10; i++){
        cout << ages[i] << endl;
    }
    cout << endl;

    //function calling
    cout << "The oldest child is: " << oldest(ages, 10) << endl;
    return 0;
}

//function description
int oldest(int ages[], int size){
    int oldest = -1; //error checking
    for(int i = 0; i < size; i++){
        if(ages[i] > oldest){
            oldest = ages[i];
        }
    }
    return oldest;

}


