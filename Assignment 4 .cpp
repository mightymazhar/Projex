#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
   float l;
   float w;

   cout << "Please enter the length of your rectangle: ";
   cin >> l;
   cout << "Please enter the width of your rectangle: ";
   cin >> w;

   float area;

   area = l * w;

   cout << endl << "The area of your rectangle is: " << l << " * " << w << " = " << area << endl;

    return 0;
}
