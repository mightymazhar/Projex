#include <iostream>


using namespace std;

int main()
 {

   int sixnum;

   cout << "Please enter a six digit number: ";
   cin >> sixnum;

   int first;
   int second;
   int third;
   int fourth;
   int fifth;
   int sixth;

   first = sixnum % 10 ;
   second = (sixnum/10) % 10 ;
   third =  (sixnum/100) % 10 ;
   fourth =  (sixnum/1000) % 10 ;
   fifth = (sixnum/10000) % 10 ;
   sixth = (sixnum/100000) % 10 ;


   cout << endl << "Your mirrored number is: " << sixth << "*" << fifth << "*" << fourth << "*" << third << "*" << second << "*" << first << endl;

   return 0;
 }
