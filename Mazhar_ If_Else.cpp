#include <iostream>

using namespace std;

int main()

{
    cout<<"Please Enter A Number";

    int variable_for_storing_number;

    cin>>variable_for_storing_number;

    if(variable_for_storing_number > 0 )
    {
       cout<<"Your'e Positive! - Well Your Number Is!" <<endl;
    }

    else if(variable_for_storing_number < 0)
    {

        cout<< "You're Negative! - Well Your Number Is!" <<endl;
    }
    else
    {

        cout<<"Your Number Is Zero!"<<endl;
    }
   return 0;
}
