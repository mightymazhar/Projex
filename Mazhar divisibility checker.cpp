#include <iostream>
#include <cmath>

using namespace std;

int main()

{
  int num;

  cout << "Please enter your number: " ;
  cin >> num;

  if (num % 2 == 0)
  {
      cout << endl << "Your number is divisible by 2 and 10!" << endl;
  }
  else if (num % 5 == 0)
  {
      cout << endl << "Your number is divisible by 5 and 10!" << endl;
  }
  else if (num % 5 == 0)
  {
      cout << endl << "Your number is divisible by 5 and 10!" << endl;
  }
  else if (num % 3 == 0)
  {
      cout << endl << "Your number is divisible by 3!" << endl;
  }
  else
  {
      cout << endl << "Your number is invalid" << endl;
  }

  return 0;

}
