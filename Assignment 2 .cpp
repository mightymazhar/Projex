#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
   float metre;

   cout << "Please enter your length in metres: ";
   cin >> metre;

   float m2fconversion;

   m2fconversion = metre * 3.2808399;

   cout << endl << "Your length in metres is: " << m2fconversion << " " << "feet" << endl;

    return 0;
}
