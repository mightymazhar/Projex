#include <iostream> //includes library to store data
#include <string> // includes library to store strings
#include <cmath> //includes library to store floats

using namespace std;

int main() // main function
{

    cout <<"##### ##### ##### ##### ##### ##### ##### #   # " << endl; //printing the welcome message
    cout <<"#     #     #   # # # # #       #   #   #  # #  " << endl;
    cout <<"# ### ###   #   # # # # ###     #   ###     #   " << endl;
    cout <<"# # # #     #   # #   # #       #   # #     #   " << endl;
    cout <<"### # ##### ##### #   # #####   #   #  ##   #   " << endl;
    cout << endl << "Greetings my name is GEOMETRY     \n" << endl;

    cout << "I shall calculate the area and perimeter of 2-D shapes and volume of 3-D shapes.\n" << endl;

    cout << endl << "*****************************************\n\n" << endl;
    cout << endl << "Please enter your choice from the ones below:\n" << endl;

    cout << endl << "What are the dimensions of your shape?\n"<<endl; // asking user's choice of measurement
    cout << "1)2D"<< endl;
    cout << "2)3D"<< endl;
    cout << "3)Leave"<< endl << endl;



    string a = "a"; //declaring some string variable
    string b = "b";
    string c = "c";
    string d = "d";
    string e = "e";
    string f = "f";
    string g = "g";


    double pi = 3.14;   //declaring a value for pi;

    int choice; //declaring a variable to store the choice of the user

    cin >> choice;

    while(choice!=3) //looping the condition so that the program only exits when when the choice is 3

    {

    if (choice == 1)

    {

    cout << endl << "****************************************\n" <<endl; //conditions and executions if the user chooses 1
    cout << endl << "You Picked 1." <<endl;
    cout << endl <<"2-D Shapes " <<endl;
    cout << endl <<"Which shape do you desire?" <<endl;

    cout << "a)Circle\n";
    cout << "b)Square\n";
    cout << "c)Rectangle\n";
    cout << "d)Trapezium\n";
    cout << "e)Parallelogram\n";
    cout << "f)Rhombus\n";
    cout << "g)Triangle\n";

    cout << endl << "Please pick a shape: " << endl; // asking user for a shape

    string choice_of_shape; //storing the choice of shape onto a string variable
    cin >> choice_of_shape;


    if ( choice_of_shape == a )

    {

    cout << endl << "****************************************" << endl;
    cout << endl << "You picked Circle " << endl;



    double radius; //asking the user for radius

    cout <<"What is the radius of your circle? " << endl;
    cin >> radius;

    double area_of_circle =( pi * radius * radius ); //declaring formula for perimeter and area for circle
    double circumference =( 2 * pi * radius );

    cout << "Perimeter = 2 * pi * " << radius <<" = " << circumference <<" m " << endl; //final result
    cout << "Area = pi * " << radius << " * " << radius << " = " << area_of_circle << " m^2 " << endl;

    }

    else if ( choice_of_shape == b )

    {

    cout << endl << "****************************************" << endl;
    cout << endl << "You picked Square " << endl;

    double side; //asking the user for a side's length

    cout <<"Please enter the length of one side of your square: " << endl;
    cin >> side;

    double area_of_square =( side * side ); //declaring formula for perimeter and area for square
    double perimeter_of_square =( side*4 );

    cout << "Perimeter = 4 * " << side <<" = " << perimeter_of_square <<" m " << endl; //final result
    cout << "Area = "<< side << " * "<< side << " = " << area_of_square << " m^2 " << endl;


    }

    else if ( choice_of_shape == c )

    {

    cout << endl << "****************************************" << endl;
    cout << endl << "You picked Rectangle " << endl;

    double length; //asking the user for a length and breadth
    double breadth;

    cout << " Please enter the length of your rectangle: " << endl;
    cin >> length;
    cout << " Please enter the length of your rectangle: " << endl;
    cin >> breadth;

    double area_of_rectangle =( length * breadth ); //declaring formula for perimeter and area for rectangle
    double perimeter_of_rectangle=(( 2 * length)+ (2*breadth));

    cout << "Perimeter = 2 * " << length <<" + "<<"2 * "<< breadth <<" = " << perimeter_of_rectangle<< " m " << endl; //displaying results
    cout << "Area = "<<length<< " * "<< breadth << " = " << area_of_rectangle << " m^2 " << endl;

    }

    else if ( choice_of_shape == d )

    {

    cout << endl << "****************************************" << endl;
    cout << endl << "You picked Trapezium " << endl;

    double length1; //asking the user for four lengths and height
    double length2;
    double length3;
    double length4;
    double height;

    cout <<" Please enter the 1st length of your trapezium: " << endl;
    cin >> length1;
    cout <<" Please enter the 2nd length of your trapezium: " << endl;
    cin >> length2;
    cout <<" Please enter the height of your trapezium: " << endl;
    cin >> height;
    cout <<" Please enter the 3rd length of your trapezium: " << endl;
    cin >> length3;
    cout <<" Please enter the 4th length of your trapezium: " << endl;
    cin >> length4;

    double area_of_trapezium = (( (length1+length2)/2 )*height); //declaring formula for perimeter and area for trapezium
    double perimeter_of_trapezium = (length1 + length2 + length3 + length4);

    cout << " Perimeter = (" << length1 <<" + "<< length2 <<" + "<< length3 <<" + "<< length4 << ") = " << perimeter_of_trapezium << " m " << endl; //displaying results
    cout << " Area = (("<<length1<< " + "<< length2 <<")/2)"<< " * " << height << ") = " << area_of_trapezium << " m^2 " << endl;


    }

    else if ( choice_of_shape == e )

    {

    cout << endl << "****************************************"<< endl;
    cout << endl << "You picked Parallelogram " << endl;



    double a; //asking the user for two sides and the height
    double b;
    double h;

    cout <<"Please enter the 1st length of your parallelogram: "<< endl;
    cin >> a;

    cout <<"Please enter the 2nd length of your parallelogram: "<< endl;
    cin >> b;

    cout <<"Please enter the height of your parallelogram: "<< endl;
    cin >> h;

    double area_of_parallelogram =( b * h ); //declaring formula for perimeter and area for parallelogram
    double perimeter_of_parallelogram =( 2*( a + b ) );

    cout << "Perimeter = 2 * (" << a <<" + "<< b << ") = " << perimeter_of_parallelogram << " m "<< endl; //displaying results
    cout << "Area = "<< b << " * "<< h << " = " << area_of_parallelogram << " m^2 "<< endl;

    }

    else if (choice_of_shape == f)

    {

    cout << endl << "****************************************" << endl;
    cout << endl << "You picked Rhombus" << endl;

    double L; //asking the user for 2 diagonals and the side
    double M;
    double N;

    cout <<"Please enter the 1st diagonal length of your rhombus: " << endl;
    cin >> L;

    cout <<"Please enter the 2nd diagonal length of your rhombus: " << endl;
    cin >> M;

    cout <<"Please enter the side of your rhombus: " << endl;
    cin >> N;


    double area_of_rhombus = ( L * M )/2; //declaring formula for perimeter and area for rhombus
    double perimeter_of_rhombus = ( 4 * N );


    cout << "Perimeter = 4 * " << N << " = " << perimeter_of_rhombus << " m " << endl; //final result
    cout << "Area = ("<< L << " * "<< M << ")/2 = " <<area_of_rhombus << " m^2 " << endl;

    }

    else if (choice_of_shape == g)

    {

    cout << endl << "****************************************" << endl;
    cout << "You picked Triangle" << endl;


    double base; //asking the user for 3 bases and height
    double height;
    double base2;
    double base3;

    cout <<"Please enter the base of the triangle: "<< endl;
    cin >> base;

    cout <<"Please enter the height of the triangle: "<< endl;
    cin >> height;

    cout <<"Please enter the 2nd side of the triangle: "<< endl;
    cin >> base2;

    cout <<"Please enter the 3rd side of the triangle: "<< endl;
    cin >> base3;



    double area_of_triangle = ( base * height )/2; //declaring formula for perimeter and area for triangle
    double perimeter_of_triangle = ( base + base2 + base3 );

    //displaying results

    cout << "Perimeter = " << base << " + " << base2 << " + "<< base3 <<" = "<< perimeter_of_triangle << " m"<< endl;
    cout << "Area = ("<< base<< " * "<< height << ")/2 = " << area_of_triangle << " m^2"<< endl;

    }

    }

    else if (choice==2)

    {

    cout << endl << "****************************************\n" << endl;
    cout << endl << "You Picked 2." << endl;
    cout <<"3-D Shapes\n" << endl;
    cout << "What shape would you pick?"<< endl;

    cout << "a)Sphere\n";
    cout << "b)Cube\n";
    cout << "c)Cuboid\n";
    cout << "d)Cylinder\n";
    cout << "e)Pyramid\n";

    string choice_volume_shape;
    cin >> choice_volume_shape;

    if ( choice_volume_shape == a )

    {

    double radi; //asking the user for radius

    cout << "Enter the radius for sphere: "<< endl;
    cin >> radi;

    double volume_of_sphere = ((4/3) * radi * radi * radi); //formula for volume of sphere

    cout << "Volume = (4/3) * " << radi << " * " << radi << " * " << radi << " = " << volume_of_sphere << " m^3 " << endl;

    }

    else if ( choice_volume_shape == b )

    {

    double side; //asking the user for one side

    cout <<"Enter the length of 1 side for cube: "<< endl;
    cin >>side;

    double volume_of_cube = side * side * side; //formula for volume of cube

    cout <<"Volume = "<< side << " * " << side << " * " << side << " = " << volume_of_cube << " m^3 "<< endl;

    }

    else if (choice_volume_shape == c)

    {

    double side1; //asking the user for 3 sides for cuboid
    double side2;
    double side3;

    cout <<"Enter the length of 1st side for cuboid: "<< endl;
    cin >> side1;

    cout <<"Enter the length of 2nd side for cuboid: "<< endl;
    cin >> side2;

    cout <<"Enter the length of 3rd side for cuboid: "<< endl;
    cin >> side3;

    double volume_of_cuboid = side1 * side2 * side3; //formula for volume of cuboid

    cout<<"Volume = " << side1 << " * " << side2 << " * " << side3 << " = " << volume_of_cuboid << " m^3 " << endl;

    }

    else if (choice_volume_shape == d)

    {

    double radii;
    double hght;

    cout <<"Enter the radius for cylinder: "<< endl; //asking the user for radius and height
    cin >>radii;

    cout <<"Enter the height for cylinder: "<< endl;
    cin >>hght;

    double volume_of_cylinder = pi * radii * radii * hght; //formula for volume of cylinder

    cout <<"Volume = pi* "<< radii << " ^2 " << " * " << hght << " = " << volume_of_cylinder << " m^3"<< endl;

    }

    else if (choice_volume_shape == e)

    {

    double lent; //asking the user for length, width and height
    double wid;
    double heit;

    cout <<"Enter the length for pyramid: "<< endl;
    cin >>lent;

    cout <<"Enter the width for pyramid: "<< endl;
    cin >>wid;

    cout <<"Enter the height for pyramid: "<< endl;
    cin >>heit;

    double volume_of_pyramid =(lent * wid * heit)/3; //formula for volume of pyramid

    cout <<"Volume = (" << lent << " * " <<wid << " * " << heit << ")/3 = " << volume_of_pyramid << " m^3 " << endl;

    }

    }

    cout <<"##### ##### ##### ##### ##### ##### ##### #   # " << endl; //printing the welcome message
    cout <<"#     #     #   # # # # #       #   #   #  # #  " << endl;
    cout <<"# ### ###   #   # # # # ###     #   ###     #   " << endl;
    cout <<"# # # #     #   # #   # #       #   # #     #   " << endl;
    cout <<"### # ##### ##### #   # #####   #   #  ##   #   " << endl;
    cout << endl << "Greetings my name is GEOMETRY     \n" << endl;

    cout << "I shall calculate the area and perimeter of 2-D shapes and volume of 3-D shapes.\n" << endl;

    cout << endl << "*****************************************\n\n" << endl;
    cout << endl << "Please enter your choice from the ones below:\n" << endl;

    cout << "What are the dimensions of your shape?\n"<< endl;
    cout << "1)2-D"<< endl;
    cout << "2)3-D"<< endl;
    cout << "3)Exit"<< endl;

    cin >>choice;

    }

    cout << endl <<"Your choice is 3"<<endl;
    cout << endl <<"You picked Leave.\n"<<endl;
    cout << endl <<" ##### ##### ##### ####      ####  #   # #####"<< endl;
    cout <<" #     #   # #   # #   #     #   #  # #  #    "<< endl;
    cout <<" # ### #   # #   # #   #     ####    #   ###  "<< endl;
    cout <<" # # # #   # #   # #   #     #   #   #   #    "<< endl;
    cout <<" ### # ##### ##### ####      ####    #   #####"<< endl;

  return 0;

}
