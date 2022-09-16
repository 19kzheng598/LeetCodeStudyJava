#include <iostream>

using namespace std;

int recursiveFunction(int x){
    if (x == 1){
        return 1;
    }

    else{
        return x * recursiveFunction(x-1);
    }
}

int main()
{
    cout << recursiveFunction(5);
}
