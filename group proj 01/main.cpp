/* Name: Kelly Williams
* Date:
* Description:
* Class Section:
*/

/*Pseudocode
* Part 1
* ===================================
* declare variables
*   double feet, inch, lbs, height, BMI
* 
* prompt user input
*   get height in feet
*   get inch compenent
*   get weight
* 
* feet x 12 to get feet component in inches
* + inches to get total height in inches = height
* 
* use BMI calculation formula
* BMI = (weight / (height x height)) x 703
* 
* output BMI results to user
* 
* =====================================
* Part 2
* =============================
* declare variables
*   string category
* 
* switch case for categories - cant use switch since BMI is a double, so use if 
*   case 1 : BMI < 18.5
*       category = "Underweight"
*   case 2 : 18.5 <= BMI < 25
*       category = "Normal Weight"
*   case 3 : 25 <=BMI < 30
*       category = "Overweight"
*   default //BMI is 30 or greater
*       category = "Obese"
* 
* output category result to user
*/



//System Libraries
#include <iostream>

//Function Prototypes

//Global Constants

//Main Function
using namespace std;
int main(int argc, char** argv)
{
    //Part 1 ====================================
    double feet, inch, lbs, height, BMI;

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

    //total height is feet in inches plus remaining inches
    height = (feet * 12) + inch;

    //calculate BMI using formula
    BMI = (lbs / (height * height)) * 703;

    //output BMI result to user
    cout << "Your BMI is " << BMI;

    //Part 2 ================================
    //declare variable
    string category;

    //use if statements for different categories

    if (BMI < 18.5)
        category = "Underweight";
    else if (18.5 <= BMI < 25)
        category = "Normal Weight";
    else if (25 <= BMI < 30)
        category = "Overweight";
    else if (BMI >= 30)
        category = "Obese";


    //finish outputting result to user
    cout << " which is " << category << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
