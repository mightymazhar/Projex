#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    int a;
    int b;
    int c;

    cout << "Welcome to root calculator" << endl;
    cout << endl << "Enter value of a: ";
    cin  >> a;
    cout << endl << "Enter value of b: ";
    cin >> b;
    cout << endl << "Enter value of c: ";
    cin >> c;


    int formula;

    formula = (-b+(sqrt(pow(b,2)-(2*a*c))))/(2*a);

    cout << endl << "Your root is: " << formula << endl;

    return 0;

}
