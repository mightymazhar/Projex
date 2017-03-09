#include <iostream>
#include <cmath>

using namespace std;

int main ()

{
   float radius;

   cout << "Please enter the radius of your circle: ";
   cin >> radius;

   float perimeter;
   float area;

   perimeter = 2 * 3.14 * radius;
   area = 3.14 * radius * radius;

   cout << endl << "Your perimeter is: " << perimeter << endl;
   cout << endl << "your area is is: " << area << endl;

    return 0;
}
