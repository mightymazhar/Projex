#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
    float a;
    float b;
    float c;

    cout << "Please enter a number a: ";
    cin >> a;

    cout << endl << "Please enter a number b: ";
    cin >> b;

    cout << endl << "Please enter a number c: ";
    cin >> c;

    float result;

    result = a*(b-c) + 1.37;

    cout << endl << "Your result by equating the formula is " << result << endl;

    return 0;
}
