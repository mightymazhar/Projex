#include <iostream>
#include <cmath>

using namespace std;

int main()

{
  int num;

  cout << "Please enter your number: " ;
  cin >> num;

  if (num % 10 == 0)
  {
      cout << endl << "Your number is divisible by 5 and 2!" << endl;
  }
  else if (num % 2 == 0)
  {
      cout << endl << "Your number is divisible by 2 not 5!" << endl;
  }
  else if (num % 5 == 0)
  {
      cout << endl << "Your number is divisible by 5 not 2!" << endl;
  }
  else
  {
      cout << endl << "Your number is invalid" << endl;
  }

  return 0;

}
