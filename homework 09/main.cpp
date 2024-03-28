/* Name: Kelly Williams
* Date:
* Description:
* Class Section:
*/

//System Libraries
#include <iostream>

//Function Prototypes
int integerPower(int, int); //exponentiation
double hypotenuse(double, double);  //hypotenuse calculations
bool multiples(int, int);   //multiples

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    int choice;
    cout << "What do you want to run?\n"
        << "1. 5.18 Exponentiation\n" << "2. 5.19 Hypotenuse Calculations\n" << "3. Multiples\n\n";
    cin >> choice;

    switch (choice)
    {
    case 1: //expoentiation
    {
        cout << "\nExponentiation\n\n";

        int base, exp;
        cout << "Input the base: ";
        cin >> base;
        cout << endl << "Input the exponent: ";
        cin >> exp;

        cout << "The value of " << base << "^" << exp << " is " << integerPower(base, exp) << endl;

        break;
    }
    case 2: //hypotenuse calculations
    {
        cout << "\nHypotenuse Calculations\n\n";

        double a, b;
        cout << "Input side 1: ";
        cin >> a;
        cout << endl << "Input side 2: ";
        cin >> b;

        double c = hypotenuse(a, b);

        cout << endl << "The hypotenuse of the right triangle is " << c << endl;

        break;
    }
    case 3: //multiples
    {
        cout << "\nMultiples\n\n";

        int first, second;

        cout << "This will tell you if the second number is a multiple of the first.\n\n"
            << "Input the first integer: ";
        cin >> first;
        cout << endl << "Input the second integer: ";
        cin >> second;

        bool mult = multiples(first, second);

        if (mult == true)
            cout << second << " is a multiple of " << first;
        else
            cout << second << " is not a multiple of " << first;

        break;
    }
    default:
    {
        cout << "\n\nhow did you get here\n\n";
        break;
    }
    }

    return 0;
}

//exponentiation function
int integerPower(int base, int exp)
{
    int total = base;
    for (int i = 1; i < exp; i++)
    {
        total *= base;
    }
    return total;
}

//hypotenuse calculations function
double hypotenuse(double a, double b)
{
    double c = sqrt(a * a + b * b);
    return c;
}

//multiples function
bool multiples(int first, int second)
{
    bool mult;
    if (second % first == 0)
        mult = true;
    else
        mult = false;

    return mult;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
