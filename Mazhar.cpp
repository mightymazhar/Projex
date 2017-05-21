#include <iostream>


using namespace std;

int main()

{
  cout << "Welcome to change machine" << endl;

  int amount;

  cout << endl << "Please enter your amount" << endl;

  cin >> amount;

  int thou;
  int fhun;
  int hun;
  int fiddy;
  int twan;
  int ten;
  int five;
  int two;

  thou = amount/1000;
  fhun = amount%1000;
  hun = amount%500;
  fiddy = amount%100;
  twan = amount%50;
  ten = amount%20;
  five = amount%10;
  two = amount%5;

  cout << endl << "your change is " << endl;

  cout << "thousand notes: " << thou << endl;
  cout << "five hundred notes: " << fhun << endl;
  cout << "hundred notes: " << hun << endl;
  cout << "fifty notes: " << fiddy << endl;
  cout << "twenty notes: " << twan << endl;
  cout << "ten notes: " << ten << endl;
  cout << "five notes: " << five << endl;
  cout << "two notes: " << two << endl;

  return 0;

}




