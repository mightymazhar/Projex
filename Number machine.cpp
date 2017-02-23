#include <iostream>
using namespace std;

int main ()

{
    int a;

    cout<< "Enter a number a " <<endl;
    cin>> a ;


    int b;

    cout<< "Enter another number b" <<endl;
    cin>> b ;

    int temp;

    int temporary_variable = a;
    a = b;
    b = temporary_variable;

    cout<<"A is " << a << endl << " B is  " << b <<  endl << ".";

    return 0;


}

