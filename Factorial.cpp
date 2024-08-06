#include <iostream>

using namespace std;


int Factorial(int value)
{
    if (value == 1 || value == 0)
    {
        return 1;
    }
    return value * Factorial(value - 1);
}



int main() {
    
    cout << Factorial(4);

}

