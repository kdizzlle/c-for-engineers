/* Name: Kelly Williams
* Date: 
* Description: 
* Class Section: 
*/

//System Libraries
#include <iostream>
#include <string>

//Function Prototypes
int EvenOrOdd(int x)    // returns 0 for even and 1 for odd
{
    int y = x % 2;

    return y;
}

//returns true if even and false if odd
bool IsEven(int x)
{
    if (x % 2 == 0)
        return true;
    else
        return false;
}

double Average(double n1, double n2, double n3)
{
    double avg = (n1 + n2 + n3) / 3;
    return avg;
}

double CalBMI(int feet, int inch, int lbs)
{
    //total height is feet in inches plus remaining inches
    int height = (feet * 12) + inch;
    
    //calculate BMI using formula
    double BMI = (lbs / (height * height)) * 703;

    return BMI;
}

string BMItype(double BMI)
{
    //use if statements for different categories
    string category;
    if (BMI < 18.5)
        category = "Underweight";
    else if (18.5 <= BMI < 25)
        category = "Normal Weight";
    else if (25 <= BMI < 30)
        category = "Overweight";
    else if (BMI >= 30)
        category = "Obese";
    return category;
}

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    int choice;
    cout << "1. EvenOrOdd\n2. IsEven\n3. Average\n4. BMI\n" << endl;
    cin >> choice;
    cout << endl << endl;


    switch (choice)
    {
    case 1: //EvenOrOdd
    {
        //prompt user input
        int a;
        cout << "Enter an integer: ";
        cin >> a;

        //pass the argument
        int b = EvenOrOdd(a);

        if (b == 0)
            cout << a << " is even - using EvenOrOdd." << endl;
        else
            cout << a << " is odd - using EvenOrOdd." << endl;
        break;
    }
    case 2: //IsEven
    {
        int a;
        cout << "Enter an integer: ";
        cin >> a;

        if (IsEven(a))
            cout << a << " is even - using IsEven." << endl;
        else
            cout << a << " is odd - using IsEven." << endl;
        break;
    }
    case 3: //Average
    {
        double n1, n2, n3;
        cout << "Enter 3 numbers: ";
        cin >> n1 >> n2 >> n3;
        cout << "The average is: " << Average(n1, n2, n3) << endl;
        break;
    }
    case 4: //BMI
    {
        int feet, inch, lbs;
        double BMI;

        //prompt user input
        cout << "Welcome to the BMI Calculator!\n"
            << "Enter your height in feet: ";
        cin >> feet;
        //validate
        if (feet <= 0)//if 0 or negative is entered
        {
            cout << "Invalid input. Try again: ";
            cin >> feet;
            if (feet <= 0)//if 0 or negative is entered
            {
                cout << "Invalid input. Restart the program and try again.\n";
                exit(0);//exit program
            }

        }

        cout << "Enter the remaining inches: ";
        cin >> inch;
        //validate
        if (inch < 0 || inch > 12)//if negative or greater than 12 inches
        {
            cout << "Invalid input. Try again: ";
            cin >> inch;
            if (inch < 0 || inch > 12)//if negative or greater than 12 inches
            {
                cout << "Invalid input. Restart the program and try again.\n";
                exit(0);//exit program
            }
        }

        cout << "Enter your weight in lbs: ";
        cin >> lbs;
        //validate
        if (lbs <= 0)//if 0 or negative is entered
        {
            cout << "Invalid input. Try again: ";
            cin >> lbs;
            if (lbs <= 0)//if 0 or negative is entered
            {
                cout << "Invalid input. Restart the program and try again.\n";
                exit(0);//exit program
            }
        }

        //call function
        BMI = CalBMI(feet, inch, lbs);
        //output BMI result to user
        cout << "Your BMI is " << BMI;
        
        string category = BMItype(BMI);

        //finish outputting result to user
        cout << " which is " << category << endl;

        break;
    }
    default:
    {
        cout << "Invalid Input.";
        break;
    }
    }
    


    return 0;
}

