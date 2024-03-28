/* Name: Kelly Williams
* Date: 11/20/2023
* Description: group project 2 - bmi calculator with user defined functions
* Class Section: ECE 1310.04
*/

using namespace std;

//System Libraries
#include <iostream>

//Function Prototypes
void Greeting(string);
double Validate1(double, int);
double Validate2(double, int, int);
double BMICalc(double, double, double);
void BMIRange(double);


//Global Constants

//Main Function
int main(int argc, char** argv)
{
    Greeting("BMI Calculator");
    double ft, in, lbs;

    cout << "\nEnter your height in feet: ";
    cin >> ft;
    ft = Validate1(ft, 0);

    cout << "\nEnter your height in inches: ";
    cin >> in;
    in = Validate2(in, 0, 12);

    cout << "\nEnter your weight in lbs: ";
    cin >> lbs;
    lbs = Validate1(lbs, 0);

    cout << endl << "Your BMI is " << BMICalc(ft, in, lbs);

    BMIRange(BMICalc(ft, in, lbs));

    return 0;
}

void Greeting(string proj)
{
    cout << "--------Welcome to " << proj << "!--------\n";
    return;
}

double Validate1(double x, int a)
{
    while (x < a)
    {
        cout << "Number invalid, please re enter value bigger than " << a << ": ";
        cin >> x;
    }
    return x;
}

double Validate2(double x, int a, int b)
{
    while (x < a || x >= b)
    {
        cout << "Number invalid, please re enter value from " << a << " to " << b << ": ";
        cin >> x;
    }
    return x;
}


double BMICalc(double f, double i, double l)
{
    double BMI = 703 * l / (((f * 12) + i) * ((f * 12) + i));
    return BMI;
}

void BMIRange(double BMI)
{
    if (BMI < 18.5)
        cout << " - Underweight\n";
    else if (BMI < 25)
        cout << " - Normal weight\n";
    else if (BMI < 30)
        cout << " - Overweight\n";
    else
        cout << " - Obesity\n";
    return;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
