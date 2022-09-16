#include <iostream>

using namespace std;

class Car { //Class Car


public:
    //Function declaration inside class
    void printInfo(){
    cout << "Model: " << model << endl;
    cout << "Age: " << age << endl;
    cout << "Speed: " << speed << endl;
    cout << "Weight: " << weight << endl;
    }
    //Properties
    const char* model;
    int age;
    int speed;
    int weight;

    //Constructor
    Car(const char* mod, int a, int s, int w){ //Assigns values to the car
        model = mod;
        age = a;
        speed = s;
        weight = w;
    }

};

class Vehicle {

};



int main()
{
    //Class calling and object creation
    Car car1((const char*)"Ford", 4, 100, 3000); //Name: Ford, Age: 3, Speed: 100, Weight: 3000 for "car1"
    Car car2((const char*)"Nissan", 5, 300, 4000);

    cout << car1.model << endl; //Prints out the model of the car "Ford"
    cout << car2.model << endl;
    car1.printInfo();

    return 0;
}
