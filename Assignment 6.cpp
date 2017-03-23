#include <iostream> // includes a library to store data
#include <string> // includes a library to store string
#include <cmath> //includes a library to store floats

using namespace std;

int main ()

{
   float times;
   float term;

    cout << "Enter your number: "; // Prompts input
    cin >> times; // takes input

    cout << endl << "Enter a number you want to multiply with: ";
    cin >> term;

    for (float number = term; number <= term; number++)  // the 'for' function initiates a loop with  (a number ; a condition ; and an increment of that condition until it reaches the condfition)
    {
        cout << endl << times << " * " << number << " = " << times * number << endl; //final output

    }

    cout << endl << "**The End**" << endl;




    return 0; // terminates program
}

